#include <stdio.h>

int n, h, st, ed;

long long inp[2000010], deq[2000010], dp[2000010];

inline long long sq(long long x) {

    return x * x;

}

inline long long calc(long long x1, long long v1, long long x2, long long v2) {

    return (v1 - v2 - x2*x2 + x1*x1 + 2*(x1-x2) - 1) / ( 2*(x1-x2));

}

int main() {

    scanf("%d%d", &n, &h);

    for (int i=1; i<=n; i++) scanf("%lld", &inp[i]);

    st = 0;

    ed = 0;

    deq[st++] = 0;

    for (int i=1; i<=n; i++) {

        while (st > ed + 1 && dp[deq[ed]] + sq(inp[i] - inp[deq[ed]+1]) >=

                              dp[deq[ed+1]] + sq(inp[i] - inp[deq[ed+1]+1])) {

            ed ++;

        }

        dp[i] = dp[deq[ed]] + sq(inp[i] - inp[deq[ed]+1]) + h;

        if (i < n) {

            while (st > ed + 1 && calc(inp[deq[st-1]+1], dp[deq[st-1]], inp[deq[st-2]+1], dp[deq[st-2]]) >=

                                  calc(inp[i+1], dp[i], inp[deq[st-1]+1], dp[deq[st-1]])) {

                st --;

            }

            deq[st++] = i;

        }

    }

    printf("%lld\n", dp[n]);

    return 0;

}

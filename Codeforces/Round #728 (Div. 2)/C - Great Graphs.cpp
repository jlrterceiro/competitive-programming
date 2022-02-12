#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 100010

long long n;
long long d[MAXN];

int main() {
    long long t;
    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &n);
        long long i;

        for (i=1; i<=n; i++) {
            scanf("%lld", &d[i]);
        }

        sort(d+1, d+1+n);

        long long ans = 0;
        long long sum = 0;
        for (i=1; i<=n; i++) {
            ans -= d[i]*(i-1)-sum;
            sum+=d[i];
        }

        for (i=1; i<=n-1; i++) {
            ans+=d[i+1]-d[i];
        }

        printf("%lld\n", ans);
    }
    return 0;
}


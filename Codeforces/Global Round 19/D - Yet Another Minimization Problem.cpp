#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 110

long long n;
long long a[MAXN], b[MAXN];
long long tot[MAXN];
long long dp[MAXN][MAXN*100];

long long go(long long x, long long sum) {

    if (sum<0) {
        return INF;
    }

    if (dp[x][sum]!=-1) {
        return dp[x][sum];
    }

    if (x==0) {
        if (sum==0) {
            return 0;
        }
        else {
            return INF;
        }
    }
    else {

        if (tot[x]-sum<=0) {
            return INF;
        }
        else {
            dp[x][sum]=INF;
            dp[x][sum]=go(x-1, sum-a[x]) + (sum-a[x])*a[x] + (tot[x]-sum-b[x])*b[x];
            dp[x][sum]=min(dp[x][sum], go(x-1, sum-b[x]) + (sum-b[x])*b[x] + (tot[x]-sum-a[x])*a[x]);
            return dp[x][sum];
        }
    }

}

int main() {
    long long t;
    scanf("%lld", &t);
    while (t--) {

        scanf("%lld", &n);
        long long i;

        for (i=1; i<=n; i++) {
            scanf("%lld", &a[i]);
        }
        for (i=1; i<=n; i++) {
            scanf("%lld", &b[i]);
        }

        tot[0]=0;
        for (i=1; i<=n; i++) {
            tot[i]=tot[i-1]+a[i]+b[i];
        }

        memset(dp, -1, sizeof(dp));

        long long ans = INF;
        int sum;
        for (sum=n; sum<=tot[n]; sum++) {
            ans = min(ans, go(n, sum));
        }

        ans *= 2;

        for (i=1; i<=n; i++) {
            ans += (n-1)*a[i]*a[i];
            ans += (n-1)*b[i]*b[i];
        }

        printf("%lld\n", ans);

    }
    return 0;
}

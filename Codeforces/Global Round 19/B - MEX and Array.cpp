#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 110

int n;
int a[MAXN];
int mex[MAXN][MAXN];
int dp[MAXN][MAXN];


int go_mex(int x, int y) {
    if (mex[x][y]!=-1) {
        return mex[x][y];
    }

    if (x==y) {
        if (a[x]==0) mex[x][y]=1;
        else mex[x][y]=0;
    }
    else {
        mex[x][y]=go_mex(x, y-1);
        if (mex[x][y]==a[y]) {
            mex[x][y]++;
        }
    }

    return mex[x][y];
}

int go_dp(int x, int y) {
    if (x>y) {
        return 0;
    }

    if (dp[x][y]!=-1) {
        return dp[x][y];
    }

    dp[x][y]=0;
    int i;
    for (i=x-1; i<=y-1; i++) {
        dp[x][y]=max(dp[x][y], go_dp(x, i)+go_mex(i+1, y)+1);
    }

    return dp[x][y];
}


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%d", &n);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
        }

        memset(mex, -1, sizeof(mex));
        memset(dp, -1, sizeof(dp));

        long long ans = 0;
        int x, y;
        for (x=1; x<=n; x++) {
            for (y=x; y<=n; y++) {
                ans += (long long) go_dp(x, y);
            }
        }

        printf("%lld\n", ans);

    }
    return 0;
}



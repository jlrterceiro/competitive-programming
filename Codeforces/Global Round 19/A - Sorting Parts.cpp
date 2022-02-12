#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 10010

int n;
int a[MAXN];
int max_pre[MAXN], min_suf[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%d", &n);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
        }
        max_pre[1]=a[1];
        for (i=2; i<=n; i++) {
            max_pre[i]=max(max_pre[i-1], a[i]);
        }
        min_suf[n]=a[n];
        for (i=n-1; i>=1; i--) {
            min_suf[i]=min(min_suf[i+1], a[i]);
        }

        int ans = 1;
        for (i=1; i<=n-1; i++) {
            if (max_pre[i]>min_suf[i+1]) {
                ans = 0;
                break;
            }
        }

        if (ans==0) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }

    }
    return 0;
}



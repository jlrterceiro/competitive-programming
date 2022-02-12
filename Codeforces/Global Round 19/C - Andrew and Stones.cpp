#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 100010

int n;
int a[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%d", &n);
        int i;
        int qt1=0;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
            if (i>=2 && i<=n-1 && a[i]==1) {
                qt1++;
            }
        }

        long long ans;
        if (n==3) {
            if (a[2]%2==1) {
                ans = -1;
            }
            else {
                ans = a[2]/2;
            }
        }
        else {
            if (qt1==n-2) {
                ans=-1;
            }
            else {
                ans = 0;
                for (i=2; i<=n-1; i++) {
                    ans += (long long) a[i]/2;
                    if (a[i]%2==1) {
                        ans++;
                    }
                }
            }
        }

        printf("%lld\n", ans);

    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 60

int n;
int a[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int i;
        int sum = 0;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
            sum+=a[i];
        }

        int ans;
        if (sum==n) {
            ans = 0;
        }
        else {
            if (sum<n) {
                ans = 1;
            }
            else {
                ans = sum-n;
            }
        }
        printf("%d\n", ans);

    }
    return 0;
}



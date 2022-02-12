#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 200010

int n;
int a[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%d", &n);
        int i, j;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
        }

        int ans = 0;
        for (i=n-1; i>=1; i--) {
            if (a[i]!=a[i+1]) {
                ans++;
                for (j=i; j>=max(i-(n-i)+1, 1); j--) {
                    a[j]=a[i+1];
                }
                i=i-(n-i)+1;
            }
        }

        printf("%d\n", ans);


    }
    return 0;
}

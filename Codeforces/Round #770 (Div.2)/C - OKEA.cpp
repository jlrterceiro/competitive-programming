#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 110


int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        int n, k;
        scanf("%d %d", &n, &k);
        int i, j;
        if (n%2==0 || k==1) {
            printf("YES\n");
            for (i=1; i<=n; i++) {
                for (j=0; j<k; j++) {
                    printf("%d ", i+j*n);
                }
                printf("\n");
            }
        }
        else {
            printf("NO\n");
        }

    }
    return 0;
}

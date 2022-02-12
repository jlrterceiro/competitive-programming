#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int i;
        if (n%2==0) {
            for (i=1; i<=n; i+=2) {
                printf("%d %d ", i+1, i);
            }
        }
        else {
            printf("3 1 2 ");
            for (i=4; i<=n; i+=2) {
                printf("%d %d ", i+1, i);
            }
        }
        printf("\n");
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 110

int n;
int a[MAXN], b[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        vector<int> v;

        scanf("%d", &n);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
        }
        for (i=1; i<=n; i++) {
            scanf("%d", &b[i]);
        }

        int maxa=0, maxb=0;
        for (i=1; i<=n; i++) {
            if (a[i]<b[i]) {
                swap(a[i], b[i]);
            }
            maxa=max(maxa, a[i]);
            maxb=max(maxb, b[i]);
        }

        printf("%d\n", maxa*maxb);

    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 100010

long long n, x, y;
long long a[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%lld %lld %lld", &n, &x, &y);
        long long i;
        for (i=1; i<=n; i++) {
            scanf("%lld", &a[i]);
        }

        long long flag = x%2;
        for (i=1; i<=n; i++) {
            flag = flag ^ (a[i]%2);
        }

        if (flag==y%2) {
            printf("Alice\n");
        }
        else {
            printf("Bob\n");
        }

    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 200010

int n;
int s[MAXN];

int main() {
    int t;
    int counter;
    scanf("%d", &t);
    for (counter=1; counter<=t; counter++) {

        scanf("%d", &n);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &s[i]);
        }

        sort(s+1, s+1+n);

        int ans = 0;

        for (i=1; i<=n; i++) {
            ans = min(ans+1, s[i]);
        }

        printf("Case #%d: %d\n", counter, ans);
    }

    return 0;
}



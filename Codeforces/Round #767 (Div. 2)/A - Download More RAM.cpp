#include <bits/stdc++.h>
using namespace std;


#define INF 1000000000
#define MAXN 110

int n, k;
int a[MAXN], b[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
        }
        for (i=1; i<=n; i++) {
            scanf("%d", &b[i]);
        }
        vector< pair<int, int> > v;
        for (i=1; i<=n; i++) {
            v.push_back(make_pair(a[i], b[i]));
        }
        sort(v.begin(), v.end());

        int ans = k;
        for (i=0; i<v.size(); i++) {
            if (v[i].first<=ans) {
                ans+=v[i].second;
            }
        }
        printf("%d\n", ans);

    }
    return 0;
}

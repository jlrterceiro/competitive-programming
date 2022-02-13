/*
------------------------------------------------------------------------

Que código feio da porra, daqui um tempo eu não vou entender nada dele

------------------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 300010
#define MAXM 300010

int n, m;
int a[MAXN];
int x[MAXM], y[MAXM];
map< pair<int, int>, int > vis;

void add(int u, int v) {
    if (u>v) {
        swap(u, v);
    }
    vis [ make_pair(u, v) ] = 1;
}

int get(int u, int v) {
    if (u>v) {
        swap(u, v);
    }
    return  vis [ make_pair(u, v) ];
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%d %d", &n, &m);

        int i;

        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
        }
        for (i=1; i<=m; i++) {
            scanf("%d %d", &x[i], &y[i]);
        }

        map< int, int > cnt;
        for (i=1; i<=n; i++) {
            cnt[a[i]]++;
        }
        map<int, vector<int> > v;
        map< int, int >::iterator iter;
        for (iter=cnt.begin(); iter!=cnt.end(); iter++) {
            if (v.find(iter->second)==v.end()) {
                v[iter->second] = vector<int>();
            }
            v[iter->second].push_back(iter->first);
        }
        map<int, vector<int> >::iterator iter2;
        for (iter2=v.begin(); iter2!=v.end(); iter2++) {
            sort(iter2->second.begin(), iter2->second.end(), greater<int>());
        }

        vis.clear();
        for (i=1; i<=m; i++) {
            add(x[i], y[i]);
        }

        long long ans = 0;
        map< int, int >::iterator iter3;
        for (iter3=cnt.begin(); iter3!=cnt.end(); iter3++) {
            for (iter2=v.begin(); iter2!=v.end() && iter2->first<=iter3->second; iter2++) {
                for (i=0; i<iter2->second.size(); i++) {
                    if (iter2->second[i]!=iter3->first && get(iter2->second[i], iter3->first)==0) {
                        ans = max(ans, (cnt[iter3->first]+cnt[iter2->second[i]])*((long long) iter3->first+iter2->second[i]));
                        break;
                    }
                }
            }
        }
        printf("%lld\n", ans);


    }
    return 0;
}







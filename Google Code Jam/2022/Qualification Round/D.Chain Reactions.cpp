#include <bits/stdc++.h>
using namespace std;

#define INF 1000000001
#define MAXN 100010

long long n;
long long f[MAXN], p[MAXN];
vector<long long> g[MAXN];

long long vis[MAXN];
long long maior[MAXN];
vector<long long> ordem;

long long get_maior(long long u) {
    if (maior[u]!=-1) {
        return maior[u];
    }
    if (g[u].size()==0) {
        maior[u]=f[u];
    }
    else {
        long long menor = INF;
        long long i;
        for (i=0; i<g[u].size(); i++) {
            long long v = g[u][i];
            menor=min(menor, get_maior(v));
        }
        maior[u]=max(f[u], menor);
    }
    return maior[u];
}

void dfs(long long u) {
    vis[u]=1;
    if (g[u].size()==0) {
        ordem.push_back(u);
    }
    else {
        vector< pair<long long, long long> > vec;

        long long i, v;
        for (i=0; i<g[u].size(); i++) {
            v = g[u][i];
            vec.push_back({get_maior(v), v});
        }

        sort(vec.begin(), vec.end());
        for (i=0; i<vec.size(); i++) {
            v = vec[i].second;
            dfs(v);
        }
    }
}


int main() {
    long long t;
    long long counter;
    scanf("%lld", &t);
    for (counter=1; counter<=t; counter++) {

        scanf("%lld", &n);
        long long i;
        for (i=1; i<=n; i++) {
            scanf("%lld", &f[i]);
            g[i].clear();
        }
        for (i=1; i<=n; i++) {
            scanf("%lld", &p[i]);
            if (p[i]!=0) {
                g[p[i]].push_back(i);
            }
        }

        memset(maior, -1, sizeof(maior));
        memset(vis, 0, sizeof(vis));
        ordem.clear();

        for (i=1; i<=n; i++) {
            if (vis[i]==0 && p[i]==0) {
                dfs(i);
            }
        }

        memset(vis, 0, sizeof(vis));
        long long ans = 0;
        for (i=0; i<ordem.size(); i++) {
            long long u = ordem[i];
           // printf("escolhido %d\n", u);
            vis[u]=1;
            long long aux = f[u];
            while (p[u]!=0 && vis[p[u]]==0) {
                u = p[u];
                aux = max(aux, f[u]);
                vis[u]=1;
            }
            ans+=aux;
        }


        printf("Case #%lld: %lld\n", counter, ans);
    }

    return 0;
}



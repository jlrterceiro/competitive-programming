#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 200010
#define MAXTREE 1000010

int n;
int a[MAXN];

int qt[MAXTREE];
int tree[MAXTREE];

void iniciar(int no, int a, int b) {
    qt[no]=0;
    tree[no]=0;
    if (a<b) {
        int esq = 2*no;
        int dir = 2*no+1;
        int meio = (a+b)/2;
        iniciar(esq, a, meio);
        iniciar(dir, meio+1, b);
    }
}

void update(int no, int a, int b, int i, int x) {
    if (a==b) {
        qt[no]+=x;
        if (qt[no]>0) tree[no]=1;
        else tree[no]=0;
    }
    else {
        int esq = 2*no;
        int dir = 2*no+1;
        int meio = (a+b)/2;
        if (i<=meio) {
            update(esq, a, meio, i, x);
        }
        else {
            update(dir, meio+1, b, i, x);
        }
        tree[no]=tree[esq]+tree[dir];
    }
}

int busca(int no, int a, int b) {
    if (a==b) {
        if (tree[no]==1) return 1;
        else return 0;
    }
    else {
        int esq = 2*no;
        int dir = 2*no+1;
        int meio = (a+b)/2;
        if (tree[no]==b-a+1) return tree[esq]+busca(dir, meio+1, b);
        else if (tree[esq]<meio-a+1) return busca(esq, a, meio);
        else return tree[esq]+busca(dir, meio+1, b);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int i, j;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
            a[i]++;
        }
        iniciar(1, 1, n+1);
        for (i=1; i<=n; i++) {
            update(1, 1, n+1, a[i], 1);
        }

        vector<int> ans;
        i = 1;
        while(i<=n) {
            int val = busca(1, 1, n+1);
           // printf("Encontrou o valor %d pra colocar\n", val);
            ans.push_back(val);
            if (val>0) {
                j=i;
                map<int, int> mp;
                int tot = 0;
                while(tot<val) {
                    if (mp[a[j]]==0 && a[j]<=val) {
                        tot++;
                    }
                   // printf("indice %d tot %d\n", j, tot);
                    mp[a[j]]=1;
                    j++;
                }
                for (i=i; i<j; i++) {
                    update(1, 1, n+1, a[i], -1);
                }
            }
            else {
                i++;
            }
           // printf("pegou ate o indice %d\n", i-1);
        }
        //printf("******\n");
        printf("%d\n", ans.size());
        for (i=0; i<ans.size(); i++) {
            printf("%d ", ans[i]);
        }
        printf("\n");
       // printf("******\n");

    }
    return 0;
}


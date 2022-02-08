#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 200010

char s[MAXN];
int n;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%s", s+1);
        n = strlen(s+1);

        int qt[2];
        qt[0]=0;
        qt[1]=0;

        int i;
        for (i=1; i<=n; i++) {
            qt[s[i]-'0']++;
        }

        if (qt[0]==qt[1]) {
            qt[s[1]-'0']--;
        }

        printf("%d\n", min(qt[0], qt[1]));


    }
    return 0;
}

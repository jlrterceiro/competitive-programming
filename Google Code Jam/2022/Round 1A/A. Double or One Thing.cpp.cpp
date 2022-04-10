#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 200010

char s[MAXN];

int main() {
    int t;
    int counter;
    scanf("%d", &t);
    for (counter=1; counter<=t; counter++) {

        scanf("%s", s+1);
        int n = strlen(s+1);;
        int qt = 1;
        int i, j;
        printf("Case #%d: ", counter);
        for (i=2; i<=n; i++) {
            if (s[i]!=s[i-1]) {
                if (s[i-1]<s[i]) {
                    for (j=1; j<=qt*2; j++) {
                        printf("%c", s[i-1]);
                    }
                }
                else {
                    for (j=1; j<=qt; j++) {
                        printf("%c", s[i-1]);
                    }
                }
                qt = 1;
            }
            else {
                qt++;
            }
        }
        for (j=1; j<=qt; j++) {
            printf("%c", s[n]);
        }
        printf("\n");

    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 200010

int main() {
    int t;
    int counter;
    scanf("%d", &t);
    for (counter=1; counter<=t; counter++) {

        int qt[5][4];
        int maxi[5];
        int i, j;
        for (i=1; i<=3; i++) {
            scanf("%d %d %d %d", &qt[i][1], &qt[i][2], &qt[i][3], &qt[i][4]);
        }
        int sum = 0;
        vector< pair<int, int> > v;
        for (i=1; i<=4; i++) {
            maxi[i]=INF;
            for (j=1; j<=3; j++) {
                maxi[i]=min(maxi[i], qt[j][i]);
            }
            sum+=maxi[i];
        }
        printf("Case #%d:", counter);
        if (sum<1000000) {
             printf(" IMPOSSIBLE\n");
        }
        else {
            for (i=1; i<=4; i++) {
                int out = min(maxi[i], sum-1000000);
                sum-=out;
                maxi[i]-=out;
                printf(" %d", maxi[i]);
            }
            printf("\n");
        }

    }
    return 0;
}



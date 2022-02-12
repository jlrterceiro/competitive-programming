#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

int main() {
     int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, k;
        scanf("%d %d %d", &a, &b, &k);

        if (a==b) {
            if (a==1) {
                printf("NO\n");
            }
            else {
                printf("YES\n");
            }
        }
        else {
            int pair_qt;
            pair_qt = (b-a+1)/2;
            if ((b-a+1)%2==1 && a%2==0) pair_qt++;
            if (k>=(b-a+1)-pair_qt) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }


    }
    return 0;
}


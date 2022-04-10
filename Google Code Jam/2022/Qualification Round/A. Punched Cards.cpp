#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int counter;
    scanf("%d", &t);
    for (counter=1; counter<=t; counter++) {

        int r, c;
        scanf("%d %d", &r, &c);
        int i, j, k;

        printf("Case #%d:\n", counter);
        for (i=1; i<=r; i++) {
            if (i==1) {

                printf("..");
                for (j=2; j<=c; j++) {
                    printf("+-");
                }
                printf("+\n");

                printf("..");
                for (j=2; j<=c; j++) {
                    printf("|.");
                }
                printf("|\n");

                for (j=1; j<=c; j++) {
                    printf("+-");
                }
                printf("+\n");

            }
            else {

                for (j=1; j<=c; j++) {
                    printf("|.");
                }
                printf("|\n");

                for (j=1; j<=c; j++) {
                    printf("+-");
                }
                printf("+\n");

            }

        }

    }
    return 0;
}



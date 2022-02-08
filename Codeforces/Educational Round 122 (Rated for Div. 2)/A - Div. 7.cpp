#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 110

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        if (n%7!=0) {
            int i=0;
            while ((n-n%10+i)%7!=0) {
                i++;
            }
            n = n - n%10 + i;
        }

        printf("%d\n", n);

    }
    return 0;
}

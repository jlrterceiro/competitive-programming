#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 110

int n, k;
char s[MAXN];

int isPalindrome() {
    int i, j;
    i=1;
    j=n;
    while (i<=j) {
        if (s[i]!=s[j]) return 0;
        i++;
        j--;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {

        scanf("%d %d", &n, &k);
        scanf("%s", s+1);
        int ans;
        if (k==0) {
            ans = 1;
        }
        else {
            ans = 1 + (1-isPalindrome());
        }
        printf("%d\n", ans);

    }
    return 0;
}

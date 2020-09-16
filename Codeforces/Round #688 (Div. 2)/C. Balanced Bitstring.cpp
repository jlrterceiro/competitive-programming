#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <utility>
#include <algorithm>
#include <limits>
#include <iomanip>
#include <bitset>


#define INF 1000000000
#define MAXN 300010

using namespace std;

int n, k;
char s[MAXN];
int qt0, qt1;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &k);
        scanf("%s", s+1);
        int i;
        qt0=0;
        qt1=0;
        for (i=1; i<=k; i++) {
            if (s[i]=='0') qt0++;
            if (s[i]=='1') qt1++;
        }
        int ans = 1;
        for (i=1; i<=k; i++) {
            if (s[i]=='?') {
                if (qt1<k/2) {
                    qt1++;
                    s[i]='1';
                }
                else {
                    qt0++;
                    s[i]='0';
                }
            }
            if (qt0>k/2 || qt1>k/2) {
                ans = 0;
            }
        }
        for (i=k+1; i<=n; i++) {
            if (s[i-k]=='0') {
                qt0--;
            }
            else {
                qt1--;
            }
            if (s[i]=='0') qt0++;
            if (s[i]=='1') qt1++;
            if (s[i]=='?') {
                if (qt1<k/2) {
                    qt1++;
                    s[i]='1';
                }
                else {
                    qt0++;
                    s[i]='0';
                }
            }
            if (qt0>k/2 || qt1>k/2) {
                ans = 0;
            }
        }
        if (ans==1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
    return 0;
}

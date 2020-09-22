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
#define MAXN 1010

using namespace std;

int n, x;
int a[MAXN];

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d", &n, &x);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &a[i]);
        }

        int sum = 0;
        int dif = 0;
        int found = 0;
        for (i=1; i<=n; i++) {
            if (a[i]!=x) {
                dif = 1;
            }
            if (a[i]==x) {
                found = 1;
            }
            sum += (x-a[i]);
        }
        if (dif==0) {
            printf("0\n");
        }
        else if (sum==0 || found ==1) {
            printf("1\n");
        }
        else {
            printf("2\n");
        }
    }
    return 0;
}

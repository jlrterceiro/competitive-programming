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

using namespace std;

#define MAXN 110

int p[MAXN];
int n;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%d", &p[i]);
        }
        for (i=n; i>=1; i--) {
            printf("%d ", p[i]);
        }
        printf("\n");
    }
    return 0;
}

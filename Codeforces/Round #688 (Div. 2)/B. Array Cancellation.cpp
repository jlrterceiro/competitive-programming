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
#define MAXN 100010

long long n;
long long a[MAXN];

using namespace std;

int main() {
    long long t;
    scanf("%lld", &t);
    while (t--) {
        scanf("%d", &n);
        int i;
        for (i=1; i<=n; i++) {
            scanf("%lld", &a[i]);
        }
        long long ans=0;
        for (i=1; i<=n-1; i++) {
            if (a[i]<0) {
                ans-=a[i];
                a[n]+=a[i];
                a[i]=0;
            }
            else {
                a[i+1]+=a[i];
                a[i]=0;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}

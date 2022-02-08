#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000
#define MAXN 110

long long hc, dc, hm, dm;
long long k, w, a;

int main() {
    long long t;
    scanf("%lld", &t);
    while (t--) {

        scanf("%lld %lld", &hc, &dc);
        scanf("%lld %lld", &hm, &dm);
        scanf("%lld %lld %lld", &k, &w, &a);

        long long i;

        long long ans = 0;

        for (i=0; i<=k; i++) {

            long long nhc = hc+i*a;
            long long ndc = dc+(k-i)*w;

            long long time_to_kill_monster = hm/ndc;
            if (hm%ndc!=0) time_to_kill_monster++;

            long long time_to_kill_character = nhc/dm;
            if (nhc%dm!=0) time_to_kill_character++;

            if (time_to_kill_monster<=time_to_kill_character) {
                ans = 1;
            }

        }

        if (ans==0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }

    }
    return 0;
}

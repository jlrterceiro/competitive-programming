#include <bits/stdc++.h>
using namespace std;

#define INF 1000000000

int main() {
    long long t;
    long long counter;
    scanf("%lld", &t);
    for (counter=1; counter<=t; counter++) {

        long long n;
        scanf("%lld", &n);
        if (n==-1) return 0;
        long long i;

        vector<long long> v;
        long long curr = 1;
        long long sum  = 0;
        for (i=1; i<=n && curr<=1000000; i++) {
            printf("%lld ", curr);
            v.push_back(curr);
            fflush(stdout);
            sum+=curr;
            curr*=2;
        }

        curr = 1000000000;
        for (i=i; i<=n; i++) {
            v.push_back(curr);
            sum+=curr;
            printf("%lld ", curr);
            curr--;
            fflush(stdout);
        }
        printf("\n");
        fflush(stdout);

        long long x;
        for (i=1; i<=n; i++) {
            scanf("%lld", &x);
            v.push_back(x);
            sum+=x;
        }
        long long mid = sum/2;
        long long a = 0, b = 0;


        sort(v.begin(), v.end(), greater<>());
        for (i=0; i<v.size(); i++) {
            if (mid-a<=1000000000 && a<b) break;
            if (a<=b) {
                a+=v[i];
                printf("%lld ", v[i]);
                fflush(stdout);
            }
            else {
                b+=v[i];
            }
        }
        mid = mid-a;
        for (i=0; i<60; i++) {
            if (( mid & (1LL<<i) ) !=0 ) {
                printf("%lld ", (1LL<<i));
                fflush(stdout);
            }
        }
        printf("\n");
        fflush(stdout);

    }

    return 0;
}



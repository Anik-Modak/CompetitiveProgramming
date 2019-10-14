#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 10000005;

ll dp[10000005];

ll g(ll n)
{
    if(n == 1)
        return 0;
    if(n < N && dp[n])
        return dp[n];
    ll sum = (n * (n - 1)) / 2;
    ll sn = (ll) sqrt(n);
    for(int i = sn; i > 0; i--)
    {
        sum -= (n / i - n / (i + 1)) * g(i);
    }
    for(int i = 2; i < n / (sn + 1) + 1; i++)
    {
        sum -= g(n / i);
    }
    if(n < N)
        dp[n] = sum;
    return sum;
}

int main()
{
    int tc, tno = 0;
    ll n, p;
    scanf("%d", &tc);
    while (tc--)
    {
        scanf("%lld %lld", &n, &p);
        printf("Case %d: ", ++tno);

        ll up = p, lb = 1, md, mx = 1;
        int i = 1;
        while(i < 50)
        {
            md = (up + lb) / 2;
            int m = n / md;
            if(g(m) + 1 >= p)
            {
                lb = md;
                mx = max(lb, mx);
            }
            else
                up = md;
            i++;
        }

        ll m = n / mx;
        if(g(m) + 1 >= p)
            printf("%lld\n", mx);
        else
            puts("-1");
    }
    return 0;
}

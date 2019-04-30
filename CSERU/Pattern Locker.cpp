#include<bits/stdc++.h>
using namespace std;

long long mod = 10000000000007;

int main()
{
    int ca=0, t;
    cin>>t;

    while(t--)
    {
        int n,l,r;
        cin>>n>>l>>r;

        long long sum = 0, m = n*n, tmp = 1;

        for(int i = 1; i <=l; i++)
        {
            tmp = (tmp*m)%mod;
            m--;
        }
        sum = tmp%mod;

        for(int i = l+1; i <= r; m--, i++)
        {
            tmp = (tmp*m)%mod;
            sum= (sum+tmp)%mod;
        }
        printf("Case %d: %lld\n",++ca,sum);
    }
    return 0;
}

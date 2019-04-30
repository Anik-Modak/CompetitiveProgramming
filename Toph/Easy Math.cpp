#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long a,long long b, long long mod)
{
    long long x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}
int main()
{
    long long b,p,m,ans;
    while(cin>>b>>p>>m)
    {
        if(b==0&&p==0&&m==0) break;
        ans=bigmod(b,p,m);
        cout<<ans<<endl;
    }
    return 0;
}


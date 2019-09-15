//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

long long bigmod(long long b,long long p,long long m)
{
    int p1,p2,h;
    if(p==0) return 1;
    if(p%2==1)
    {
        p1=b%m;
        p2=bigmod(b,p-1,m)%m;
        return (p1*p2)%m;
    }
    else
    {
        h=bigmod(b,p/2,m)%m;
        return (h*h)%m;
    }
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

//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll digit(ll n)
{
    ll r, s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s += (r*r);
    }
    return s;
}

int ck;
void solve(ll n)
{
    ll s = digit(n);
    if(s == 1)
    {
        ck++;
        return;
    }
    else if(s < 10)
    {
        ck = -1;
        return;
    }
    else
    {
        ck ++;
        solve(s);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;

    ck = 0;
    solve(n);

    cout<<ck<<endl;
    return 0;
}

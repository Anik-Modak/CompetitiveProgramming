//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll bigmod ( ll a, ll p, ll m )
{
    ll res = 1;
    ll x = a;

    while ( p )
    {
        if ( p & 1 )
        {
            res = ( res * x ) % m;
        }
        x = ( x * x ) % m;
        p = p >> 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        ll a, b, d;
        cin>>b;

        a = s[s.size()-1] - '0';
        d = bigmod(a, b, 10);
        cout<<d<<"\n";
    }
    return 0;
}

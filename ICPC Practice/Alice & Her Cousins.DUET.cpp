//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        ll x, y, z;
        cin>>x>>y>>z;

        if(x<y && x<z)
            cout<<"Case "<<++cas<<": Possible\n";
        else if(x%y && x%z)
            cout<<"Case "<<++cas<<": Possible\n";
        else
            cout<<"Case "<<++cas<<": Impossible\n";
    }
    return 0;
}

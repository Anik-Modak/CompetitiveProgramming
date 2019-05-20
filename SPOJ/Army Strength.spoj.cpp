//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n, m;
        cin>>n>>m;

        ll a, b, ma = 0, mb = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            ma = max(ma, a);
        }

        for(int i=0; i<m; i++)
        {
            cin>>b;
            mb = max(mb, b);
        }

        if(ma >= mb)
            cout<<"Godzilla\n";
        else
            cout<<"MechaGodzilla\n";
    }
    return 0;
}

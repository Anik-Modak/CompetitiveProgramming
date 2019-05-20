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
        ll a, b, s;
        cin>>a>>b>>s;

        ll ele = 2*s/(a+b);
        cout<<ele<<endl;

        if(a==b)
        {
            for(ll i=1; i<=s/a; i++)
            {
                if(i==s/a)
                    cout<<a<<"\n";
                else
                    cout<<a<<" ";
            }
        }
        else
        {
            ll i, diff = diff = (b-a)/(ele-5);
            cout<<a-2*diff<<" ";
            for(i = a-diff; i<=b+diff; i= i+diff)
                cout<<i<<" ";
            cout<<i<<"\n";
        }
    }
    return 0;
}

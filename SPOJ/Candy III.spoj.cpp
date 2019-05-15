//Anik_Modak
#include<bits/stdc++.h>
#defin MX 10005
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        ll a, sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum = (sum + a)%n;
        }

        if(sum == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}


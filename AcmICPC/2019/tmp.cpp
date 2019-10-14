//RU_BinaryCode
#include<bits/stdc++.h>
#define ll long long
#define MX 10005
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        ll a, mn = 100000000000000, mx = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            mn = min(a, mn);
            mx = max(a, mx);
        }
        cout<<"Case "<<++cas<<": "<<mn*mx<<"\n";
    }
    return 0;
}


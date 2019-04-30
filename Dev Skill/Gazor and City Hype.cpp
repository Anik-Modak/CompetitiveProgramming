#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long b,p,x,ans=0;
        cin>>b>>p;
        ans=p%b;
        cout<<ans<<endl;
    }
    return 0;
}

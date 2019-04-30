#include<bits/stdc++.h>
using namespace std;

long long solve(long long n,long long r)
{
    if(n-r<r) r=n-r;

    long long ans=1;
    for(int i=1; i<=r; i++)
        ans=ans*(n-i+1)/i;
    return ans;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n, m, p;
        cin>>n>>m>>p;

        long long ans;
        if(m<n*p) ans=0;
        else ans = solve(m-n*p+n-1,n-1);
        cout<<ans<<endl;
    }
}


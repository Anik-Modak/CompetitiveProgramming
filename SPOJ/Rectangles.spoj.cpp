#include<bits/stdc++.h>
#define ll long long
using namespace std;

int divisor(long long n)
{
    long long c=0, m=sqrt(n+1);
    for(int i=1; i<=m; i++)
    {
        if(n%i==0)
            c=c+2;
    }
    return c;
}

int main()
{
    ios_base::sync_with_stdio(false);
    long long n, ans = 1;
    cin>>n;

    for(int i=2; i<=n; i++)
    {
        ans += divisor(i)/2;
    }

    cout<<ans<<endl;
    return 0;
}

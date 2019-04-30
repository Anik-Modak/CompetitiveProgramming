#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,x,ans;
    cin>>n>>a>>b;
    x=b%n;
    if(x<0)x=n+x;
    ans=a+x;
    cout<<ans<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ans;
    cin>>n;
    double d=n/3.0;
    ans=n/3;
    if(d-ans>0) ans++;
    cout<<ans<<endl;
}

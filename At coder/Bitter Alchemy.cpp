//AnikModak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,m,mn=100005;
    cin>>n>>x;

    long long sum=0,ans=n;
    while(n--){
        cin>>m;
        sum=sum+m;
        mn=min(mn,m);
    }
    ans+=(x-sum)/mn;
    cout<<ans<<endl;
}

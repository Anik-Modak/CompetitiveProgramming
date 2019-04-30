#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    mp["Rajshahi"]=0;
    mp["Dhaka"]=300;
    mp["Chittagong"]=500;
    mp["Kathmandu"]=3500;
    mp["Butwal"]=8500;

    int t,ans;
    cin>>t;
    string a,b;

    while(t--){
        cin>>a>>b;
        ans=abs(mp[a]-mp[b]);
        if(ans==5000) ans=ans+6000;
        cout<<ans<<endl;
    }
}



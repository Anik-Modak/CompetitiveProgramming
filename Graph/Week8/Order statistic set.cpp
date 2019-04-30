//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    int n;
    faster();
    cin>>n;

    map<ll,int>mp;
    vector<ll>v;

    while(n--)
    {
        ll x;
        char ch;
        cin>>ch>>x;

        if(ch=='I')
        {
            if(mp[x]==0) v.push_back(x);
            mp[x]=v.size();
        }
        if(ch=='D')
        {
            if(mp[x]) v.erase(v.begin()+mp[x]-1);
            mp[x]=0;
        }
        if(ch=='K')
        {
            sort(v.begin(),v.end());
            if(v.size()<x) cout<<"invalid"<<endl;
            else cout<<v[x-1]<<endl;
        }
        if(ch=='C')
        {
            sort(v.begin(),v.end());
            int pos = lower_bound(v.begin(),v.end(),x)-v.begin();
            cout<<pos<<endl;
        }
    }
    return 0;
}

//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool sortbysec( pair<ll,ll> a,pair<ll,ll> b)
{
    return ( abs(a.first-a.second) >= abs(b.first-b.second));
}

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        cin>>n;
        vector< pair<ll,ll> >v;

        long long a,b,c=1;

        for(int i=0; i<n; i++)
        {
            scanf("%lld %lld",&a,&b);
            v.push_back( make_pair(a,b) );
        }
        sort(v.begin(),v.end(),sortbysec);

        for(int i=0; i<n; i++) cout<<v[i].first<<" "<<v[i].second<<endl;

    }
    return 0;
}



//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    int a[n], b[n], c[n], d[n], ans = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }

    vector<int> v;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            v.push_back(a[i]+b[j]);

    unordered_map<int, int>mp;
    mp.reserve(9000000);

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            mp[c[i]+d[j]] ++;

    for(int i=0; i<v.size(); i++)
    {
        if (mp.find(-v[i]) != mp.end())
        {
            ans += mp[-v[i]];
        }
    }

    cout<<ans<<"\n";
    return 0;
}

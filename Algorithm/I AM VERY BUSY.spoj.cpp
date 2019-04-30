//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

bool compare(pii a, pii b)
{
    return a.second<b.second;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, st, ed;
        cin>>n;
        vector<pii>v;

        for(int i=0; i<n; i++)
        {
            cin>>st>>ed;
            v.push_back({st,ed});
        }

        int cnt=0, fr;
        sort(v.begin(),v.end(),compare);

        for(int i=0; i<n; i++)
        {
            //cout<<v[i].second<<endl;
            if(i==0)
            {
                cnt++;
                fr=v[i].second;
            }
            else if(v[i].first>=fr)
            {
                cnt++;
                fr=v[i].second;
            }
        }
        cout<<cnt<<endl;
    }
}

//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        map<int,int>mp;
        int n, m, a;

        cin>>n;
        while(n--)
        {
            cin>>a;
            mp[a]++;
        }

        cin>>m;
        while(m--)
        {
            cin>>a;
            mp[a]++;
        }

        map<int,int>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            int x = it->first;
            while(mp[x])
            {
                cout<<it->first<<" ";
                mp[x]--;
            }
        }
        cout<<endl;
    }
}

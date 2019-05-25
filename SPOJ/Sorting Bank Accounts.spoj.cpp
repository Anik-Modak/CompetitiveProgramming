//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        cin.ignore();

        map<string, int> mp;
        for(int i=0; i<n; i++)
        {
            string s;
            getline(cin, s);
            mp[s] ++;
        }

        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            cout<<it->first<<" "<<it->second<<"\n";
        }
    }
    return 0;
}


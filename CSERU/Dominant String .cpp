//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s[15002];

    int i=0;
    while(cin>>s[i]) i++;
    sort(s,s+i);

    vector<string>v;
    for(int j=i-1; j>=0; j--)
    {
        map<char,int>mp;
        for(int k=0; k<s[j].size(); k++) mp[s[j][k]]++;

        for(int k=0; k<j; k++)
        {
            int cnt=0;
            for(int l=0; l<s[k].size(); l++)
            {
                if(mp[s[k][l]]) cnt++;
            }
            if(cnt==s[k].size()) s[k]="0";
        }
        if(s[j]!="0") v.push_back(s[j]);
    }

    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}


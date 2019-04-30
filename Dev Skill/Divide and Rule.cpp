//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

map<int,string>mp;

void solve()
{
    mp[1]="3";
    for(int i=1; i<=1000; i++)
    {
        string s="1";
        s.resize(i,'0');
        mp[i+1]=s+"2";
    }
}

int main()
{
    int t;
    cin>>t;
    solve();

    while(t--)
    {
        int n;
        cin>>n;

        cout<<mp[n]<<endl;
    }
}

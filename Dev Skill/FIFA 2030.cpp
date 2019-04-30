#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        string s;
        map<int,string>mp;
        int gol,mx=0;

        while(n--){
            cin>>s>>gol;
            mp[gol]=s;
            mx=max(gol,mx);
        }
        cout<<"Winner: \\"<<mp[mx]<<"/"<<endl;
    }
}


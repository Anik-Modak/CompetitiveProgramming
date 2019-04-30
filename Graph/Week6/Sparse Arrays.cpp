//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n;

    string s;
    map<string,int>mp;
    while(n--)
    {
        cin>>s;
        mp[s]++;
    }

    cin>>q;
    while(q--)
    {
        cin>>s;
        cout<<mp[s]<<endl;
    }
}

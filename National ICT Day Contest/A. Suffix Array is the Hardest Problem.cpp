#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,k;
    string s;
    map<char,int>mp;

    while(t--){
        cin>>s>>n;
        int i,c=0;
        while(n--){
            cin>>k;
            for(i=1;i<=k;i++)
            {
                mp[s[i]]++;
                if(mp[s[i]]==1) c++;
            }
            cout<<c<<endl;
        }
    }
}

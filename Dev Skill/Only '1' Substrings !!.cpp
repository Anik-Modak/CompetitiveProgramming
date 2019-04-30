#include<bits/stdc++.h>
using namespace std;

int a[10005];
void fn()
{
    a[0]=0;
    a[1]=1;
    for(int i=2; i<=10000; i++) a[i]=a[i-1]+i;
}
int main()
{
    int t;
    cin>>t;
    fn();
    while(t--){
        string s;
        cin>>s;
        vector<char>v;
        long long ans=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0'){
                ans+=a[v.size()];
                v.clear();
            }
            else v.push_back(s[i]);
        }
        ans+=a[v.size()];
        cout<<ans<<endl;
    }
}

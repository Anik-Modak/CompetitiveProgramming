#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    map<int,int>mp;
    while(n--){
        cin>>x;
        mp[x]++;
    }
    int a[3];
    a[0]=mp[2]+2*mp[1];
    a[1]=mp[0]+2*mp[2];
    a[2]=mp[1]+2*mp[0];
    sort(a,a+3);
    cout<<a[0]<<endl;
}

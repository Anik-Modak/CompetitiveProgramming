#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,a,p,mn,s=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a>>p;
        if(i==1) mn=p;
        if(mn>=p) mn=p;
        s=s+mn*a;
    }
    cout<<s<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,s,m,p=0;
    cin>>a>>b>>s;
    a=abs(a);
    b=abs(b);
    if(a+b==s) p=1;
    else if(a+b<s){
        m=s-(a+b);
        if(m%2==0) p=1;
    }
    else p=0;
    if(p==1) cout<<"Yes\n"<<endl;
    else cout<<"No\n"<<endl;
}

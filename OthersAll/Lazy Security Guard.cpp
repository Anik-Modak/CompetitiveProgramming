#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans;
    cin>>n;
    m=sqrt(n);
    if(sqrt(n)-m==0) ans=m*4;
    else{
        if(n%m==0) ans=(m+n/m)*2;
        else ans=(m+n/m)*2+2;
    }
    cout<<ans<<endl;
}

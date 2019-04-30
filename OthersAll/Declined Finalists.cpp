#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,a,mx=0;
    cin>>k;
    for(i=1;i<=k;i++)
    {
        scanf("%d",&a);
        if(mx<a) mx=a;
    }
    if(mx<=25) cout<<0<<endl;
    else cout<<mx-25<<endl;
}

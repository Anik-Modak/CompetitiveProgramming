#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long b[n];
    for(i=0;i<n;i++) scanf("%I64d",&b[i]);
    sort(b,b+n);
    long long c1=0,c2=0,ans;
    for(i=0;i<n;i++)
    {
        if(b[i]==b[0]) c1++;
        if(b[i]==b[n-1]) c2++;
    }
    if(c1==n) ans=c1*(c1-1)/2;
    else ans=c1*c2;
    printf("%I64d %I64d\n",b[n-1]-b[0],ans);
}

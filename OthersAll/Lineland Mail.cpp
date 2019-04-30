#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    long long a[n+1],x,y,mx,mn;
    for(i=0;i<n;i++) cin>>a[i];

    printf("%I64d %I64d\n",a[1]-a[0],a[n-1]-a[0]);

    for(i=1;i<n-1;i++)
    {
        x=abs(a[i+1]-a[i]);
        y=abs(a[i]-a[i-1]);

        if(x>y) mn=y;
        else mn=x;

        x=abs(a[n-1]-a[i]);
        y=abs(a[i]-a[0]);

        if(x>y) mx=x;
        else mx=y;

        printf("%I64d %I64d\n",mn,mx);
    }
    printf("%I64d %I64d\n",a[n-1]-a[n-2],a[n-1]-a[0]);
}

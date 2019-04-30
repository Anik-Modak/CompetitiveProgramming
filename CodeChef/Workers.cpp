#include<bits/stdc++.h>
#define siz 100005
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n],t;
    for(int i=0; i<n; i++) cin>>a[i];

    int min1=siz,min2=siz,min3=siz,ans;

    for(int i=0; i<n; i++)
    {
        cin>>t;
        if(t==1) min1=min(min1,a[i]);
        if(t==2) min2=min(min2,a[i]);
        if(t==3) min3=min(min3,a[i]);
    }
    ans=min(min3,min1+min2);
    cout<<ans<<endl;
}

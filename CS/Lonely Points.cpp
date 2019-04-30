#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long m=n-1,a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    long long d[m],mx=0;
    for(int i=1; i<n; i++) d[i-1]=a[i]-a[i-1];

    sort(d,d+m);
    if(m==2) cout<<d[m-2]<<endl;
    else cout<<d[m-3]<<endl;
}



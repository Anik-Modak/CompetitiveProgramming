//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int i,a[n],b;
    for(i=0; i<n; i++) cin>>a[i];

    cin>>b;
    long long s=0;
    for(i=0; i<n; i++)
    {
        if(i==k) continue;
        s+=a[i];
    }
    s/=2;

    if(b-s>0) cout<<b-s<<endl;
    else cout<<"Bon Appetit"<<endl;
}




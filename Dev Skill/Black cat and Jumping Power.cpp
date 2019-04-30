#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int n,b,c;

    while(t--)
    {
        cin>>n>>b>>c;

        int i,a[n],d=0,mx=0;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);

        if(n==0) mx=b;
        else{
            for(i=0;i<n;i++)
            {
                if(a[i]-d>mx) mx=a[i]-d;
                d=a[i];
            }
            if(b-d>mx) mx=b-d;
        }
        if(mx<c) cout<<0<<endl;
        else cout<<mx-c<<endl;
    }
}


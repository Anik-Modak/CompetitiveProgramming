//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        int n,q;
        cin>>n>>q;

        long long a[n],b;
        for(int i=0; i<n; i++) cin>>a[i];

        int x,y,z;
        while(q--){
            cin>>x>>y>>z;
            if(x==1){
                 for(int i=0; i<n; i++)
                    if(a[i]<=y) a[i]-=z;
            }
            else{
                for(int i=0; i<n; i++)
                    if(a[i]>=y) a[i]+=z;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(i==n-1) cout<<a[i]<<endl;
            else cout<<a[i]<<" ";
        }
    }
}



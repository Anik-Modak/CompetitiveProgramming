#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int a[n],ans=0,mn=1000005;
        for(int i=0; i<n; i++){
            cin>>a[i];
            mn=min(mn,a[i]);
        }
        for(int i=0; i<n; i++) if(mn!=a[i]) ans+=(a[i]-mn);
        cout<<ans<<endl;
    }
}




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,s;
    cin>>n>>m>>s;

    int i,a[m],b[n],c[n],ma=0,ia,mb=0,ib,id;
    for(i=0;i<m;i++){
        cin>>a[i];
        if(ma<a[i]) ma=a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
        if(mb<b[i]){
            mb=b[i];
            ib=i;
        }
    }
    for(i=0;i<n;i++) cin>>c[i];
    if(mb>=ma){
        if(c[ib]>s) cout<<"NO"<<endl;
        else{
            s=s-c[ib];
            for(i=0;i<m;i++) if(s==c[i]) id=i;
            cout<<"YES"<<endl;
            for(i=0;i<m;i++){
                if(b[id]>=a[i]) c[i]=id+1;
                else c[i]=ib+1;
            }

            for(i=0;i<m;i++){
                if(i==m-1) cout<<c[i]<<endl;
                else cout<<c[i]<<" ";
            }
        }
    }
    else cout<<"NO"<<endl;
}

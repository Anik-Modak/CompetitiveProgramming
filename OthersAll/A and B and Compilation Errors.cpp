#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n;
    int a[n],b[n],c[n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n-1;i++) cin>>b[i];
    for(i=0;i<n-2;i++) cin>>c[i];
    sort(a,a+n);
    sort(b,b+n-1);
    sort(c,c+n-2);
    b[n-1]=0;c[n-2]=0;
    for(i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<a[i]<<endl;break;
        }
    }
    for(i=0;i<n-1;i++){
        if(b[i]!=c[i]){
            cout<<b[i]<<endl;break;
        }
    }
}

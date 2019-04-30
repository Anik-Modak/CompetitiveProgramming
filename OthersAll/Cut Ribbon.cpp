#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,a,b,c,m,x,mx=0;
    cin>>n>>a>>b>>c;
    for(i=0;i*a<=n;i++){
        j=0;
        m=i*a;
        while(m<=n){
            m=i*a+j*b;
            x=(n-m)/c+i+j;
            if((n-m)%c==0&&x>mx) mx=x;
            j++;
        }
    }
    cout<<mx<<endl;
}

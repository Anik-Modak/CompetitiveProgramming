#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c;
    cin>>t;
    for(c=1;c<=t;c++)
    {
        int n,i,a[200];
        cin>>n;
        for(i=1;i<=n;i++) cin>>a[i];
        int m,b[200],d[200];
        cin>>m;
        for(i=1;i<=m;i++) cin>>b[i]>>d[i];
        sort(d,d+m);
        int q,x,j,s;
        cin>>q;
        for(i=1;i<=q;i++){
            cin>>x;
            s=0;
            j=1;
            while(d[j]!=x){
                double f=d[j]-d[j+1];
                s=s+pow(f,3.0);
                j++;
            }
            if(s>0) cout<<s<<endl;
            else cout<<"?"<<endl;
        }
    }
}





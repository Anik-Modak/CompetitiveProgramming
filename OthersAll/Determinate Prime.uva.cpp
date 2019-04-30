#include<bits/stdc++.h>
using namespace std;
int a[32000];
int main()
{
    int n,i,j,m;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        a[1]=1;
        a[0]=1;
        for(i=2;i<=m;i++){
            if(a[i]==0){
                for(j=i+i;j<=m;j=j+i) a[j]=1;
            }
        }
        int d=0,df,s=0,c=0,b[m],k,e;
        for(i=n;i<=m;i++) if(a[i]==0)e=i;
        for(i=n,j=1;i<=m;i++)
        {
            if(a[i]==0){
                df=i-d;
                if(df==s){
                    if(c==1) b[j++]=d;
                    b[j++]=i;
                    c++;
                }
                else if(c>=2){
                   for(k=0;k<=c;k++){
                     if(k==c) printf("%d\n",b[k]);
                     else printf("%d ",b[k]);
                     b[k]=0;
                   }
                   c=1;
                   j=1;
                }
                else{
                    b[0]=d;
                    c=1;
                }
                s=df;
                d=i;
            }
            if(c>=2&&e==i){
                for(k=0;k<=c;k++){
                    if(k==c) printf("%d\n",b[k]);
                    else printf("%d ",b[k]);
                }
            }
        }
    }
}

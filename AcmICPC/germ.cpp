#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,c;
   cin>>t;
   getchar();
   for(c=1;c<=t;c++)
   {
       string a;
       cin>>a;
       int n,i,j,q,l,r,cnt;
       char ch;
       cin>>q;
       for(i=1;i<=q;i++)
       {
           cin>>l;
           if(l==1){
                cin>>r>>ch;
                a[r]=ch;
           }
           n=a.size();
           if(l==2){
                int p=0,u=0,mu=0,v=0;
                for(j=0;j<n;j++){
                    if(a[j]=='L') u++;
                    if(a[j]=='R') v++;
                    if(u<v){
                        p=1; break;
                    }
                }
                if(p==1||u!=v) printf("We are doomed!\n");
                else{
                     u=0;
                     for(j=0;j<n;j++)
                     {
                        if(a[j]=='#'){
                            if(a[j+1]=='R') u++;
                            else u=u;
                        }
                        else{
                            if(a[j]=='L') u++;
                            else u=0;
                        }
                        if(mu<u) mu=u;
                     }
                     printf("%d\n",mu);
                }
           }
       }
   }
}


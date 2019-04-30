#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,c;
   cin>>t;
   getchar();
   for(c=1;c<=t;c++)
   {
       string a,b;
       cin>>a;
       int n,i,j,q,l,r,cnt;
       char ch;
       cin>>q;
       for(i=1;i<=q;i++)
       {
           cnt=0;
           cin>>l;
           if(l==1){
                cin>>r>>ch;
                a[r]=ch;
           }
           b=a;
           cout<<b<<endl;
           if(l==2){
                while(1){
                    int val,u=0,v=0,p=1;
                    n=b.size();
                    if(cnt==0){
                        for(j=0;j<n;j++){
                            if(b[j]=='L') u++;
                            if(b[j]=='R') v++;
                        }
                    }
                    if(u!=v) break;
                    while((val = b.find("LR"))!=-1)
                    {
                        b.erase(val,2);
                        b.insert(val,"ab");
                        p=0;
                    }
                    while((val = b.find("ab"))!=-1)  b.erase(val,2);
                    if(cnt==0) b.erase(remove(b.begin(), b.end(), '#'), b.end());
                    if(n==0) break;
                    cnt++;
                }
                if(n==0) printf("%d\n",cnt);
                else printf("We are doomed!\n");
           }
       }
   }
}

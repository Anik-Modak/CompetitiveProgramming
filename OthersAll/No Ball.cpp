#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ca;
    cin>>t;
    for(ca=1;ca<=t;ca++){
        string a,b,c,d,e;
        int i,j,p=0;
        cin>>a;
        for(i=0;i<5;i++){
            if(a[i]=='|'){
                for(j=0;j<i;j++)
                    if(a[j]=='<') p=1;
                for(j=i;j<5;j++)
                    if(a[j]=='>') p=1;
            }
        }
        cin>>b;
        for(i=0;i<5;i++){
            if(b[i]=='|'){
                for(j=0;j<i;j++)
                    if(b[j]=='<') p=1;
                for(j=i;j<5;j++)
                    if(b[j]=='>') p=1;
            }
        }
        cin>>c;
        for(i=0;i<5;i++){
            if(c[i]=='|'){
                for(j=0;j<i;j++)
                    if(c[j]=='<') p=1;
                for(j=i;j<5;j++)
                    if(c[j]=='>') p=1;
            }
        }
        cin>>d;
        for(i=0;i<5;i++){
            if(d[i]=='|'){
                for(j=0;j<i;j++)
                    if(d[j]=='<') p=1;
                for(j=i;j<5;j++)
                    if(d[j]=='>') p=1;
            }
        }
        cin>>e;
        for(i=0;i<5;i++){
            if(e[i]=='|'){
                for(j=0;j<i;j++)
                    if(e[j]=='<') p=1;
                for(j=i;j<5;j++)
                    if(e[j]=='>') p=1;
            }
        }
        if(p==1) printf("Case %d: No Ball\n",ca);
        else printf("Case %d: Thik Ball\n",ca);
    }
}

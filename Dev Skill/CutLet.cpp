#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    cin>>t;
    int n,m,k,x,y;
    while(t--){
        scanf("%d%d%d",&n,&m,&k);
        long long p,q,mx=0;
        for(i=1;i<=k;i++){
            if(n<m){
                q=m-i;
                p=n-(k-i);
            }
            else{
                p=n-i;
                q=m-(k-i);
            }
            if(p<0&&q<0) break;
            if(p*q>=mx){
                if(mx==p*q&&n-p>m-q) continue;
                mx=p*q;
                x=n-p;
                y=m-q;
            }
        }
        if(mx) printf("%lld %d %d\n",mx,x,y);
        else printf("-1\n");
    }
}



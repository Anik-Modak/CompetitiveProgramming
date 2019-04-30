#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define ll long long
using namespace std;

int ara[1005],mr[1005];

int rec(int n){
    if(mr[n]==1) return n;
    mr[n] = 1;
    return  rec(ara[n]);
}

int main(){
    int n,h,a,b,f,k,x,y,z,cn=0,p,q,r,s,ta,fa,tb,fb,i,ans;
    cin>>n;
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    for(i=1;i<=n;i++){
        memset(mr,0,sizeof mr);
        if(i==n) printf("%d\n",rec(i));
        else printf("%d ",rec(i));
    }
    //cin>>x;
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define chk(n,i) (bool)(n&(1<<i))
#define on(n,i) (n|(1<<i))
#define off(n,i) n=n&(~(1<<i))
#define eps 10e-7
#define MX 100005
#define MAX 1000000000
using namespace std;

int ara[MX],seg[4*MX],seg2[MX*4];

void creat(int lw,int hi,int pos)
{
    if(lw==hi){
        seg[pos] = seg2[pos] = ara[lw];
        return ;
    }
    int mid = (lw+hi)/2;

    creat(lw,mid,pos*2+1);
    creat(mid+1,hi,pos*2+2);

    seg[pos] = max(seg[pos*2+1],seg[pos*2+2]);
    seg2[pos] = min(seg2[pos*2+1],seg2[pos*2+2]);
}

int qmax(int lw,int hi,int a,int b,int pos)
{
    if(a<=lw&&b>=hi) return seg[pos];
    if(a>hi||b<lw) return 0;
    int mid = (lw+hi)/2;
    return max(qmax(lw,mid,a,b,pos*2+1),qmax(mid+1,hi,a,b,pos*2+2));
}

int qmin(int lw,int hi,int a,int b,int pos)
{
    if(a<=lw&&b>=hi) return seg2[pos];
    if(a>hi||b<lw) return MAX;
    int mid = (lw+hi)/2;
    return min(qmin(lw,mid,a,b,pos*2+1),qmin(mid+1,hi,a,b,pos*2+2));
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,n,m,x,y,sum,q,mx;
    freopen("1093.txt","r",stdin);
    scanf("%d",&ts);
    while(++cas<=ts){
        scanf("%d %d",&n,&q);
        mx=0;
        MS(seg,0)
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        creat(0,n-1,0);
        for(i=0;i<n;i++){
            x = qmax(0,n-1,i,i+q-1,0);
            y = qmin(0,n-1,i,i+q-1,0);
            mx = max(mx,x-y);
        }
        printf("Case %d: %d\n",cas,mx);
    }
    return 0;
}


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
#define MX 100000000
using namespace std;

int ara[100005],seg[4*141072],a,b;

void creat(int lw,int hi,int pos)
{
    if(lw==hi){
        seg[pos] = ara[lw];
        return ;
    }
    int mid = (lw+hi)/2;

    creat(lw,mid,pos*2+1);
    creat(mid+1,hi,pos*2+2);
    seg[pos] = min(seg[pos*2+1],seg[pos*2+2]);
}

int cheak(int lw,int hi,int pos)
{
    if(a<=lw&&b>=hi) return seg[pos];
    if(a>hi||b<lw) return MX;
    int mid = (lw+hi)/2;
    return min(cheak(lw,mid,pos*2+1),cheak(mid+1,hi,pos*2+2));
}

int main()
{
    int i,j,ts,cn=0,cas=0,n,q;
    freopen("1082.txt","r",stdin);
    scanf("%d",&ts);
    while(++cas<=ts){
        //memset(seg,0,sizeof seg);
        scanf("%d %d",&n,&q);
        for(i=1;i<=n;i++){
            scanf("%d",&ara[i]);
        }
        creat(1,n,1);
        printf("Case %d:\n",cas);
       // for(i=1;i<=n*3;i++) cout<<seg[i]<<" ";
        while(q--){
            scanf("%d %d",&a,&b);
            printf("%d\n",cheak(1,n,1));
        }
    }
    return 0;
}

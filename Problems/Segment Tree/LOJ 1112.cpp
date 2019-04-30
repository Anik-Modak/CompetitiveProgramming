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

int ara[MX],seg[10*MX],lazy[10*MX];

void creat(int lw,int hi,int pos)
{
    if(lw==hi){
        seg[pos] = ara[lw];
        return ;
    }
    int mid = (hi+lw)/2;
    creat(lw,mid,pos*2+1);
    creat(mid+1,hi,pos*2+2);
    seg[pos] += seg[pos*2+1] + seg[pos*2+2];
}

void update(int low,int high,int ulow,int uhigh,int val,int pos)
{
    if(low>high) return ;
    if(lazy[pos]!=0){
        seg[pos] += lazy[pos];
        if(low!=high){
            lazy[pos*2+1] += lazy[pos];
            lazy[pos*2+2] += lazy[pos];
        }
        lazy[pos] = 0;
    }

    if(ulow>high||uhigh<low) return;
    //P2(low,high)
    if(ulow<=low&&uhigh>=high){
        seg[pos] += val;
        //P2(seg[pos],pos)
        if(low!=high){
            lazy[pos*2+1] += val;
            lazy[pos*2+2] += val;
        }
        return;
    }

    int mid = (high+low)/2;

    update(low,mid,ulow,uhigh,val,pos*2+1);
    update(mid+1,high,ulow,uhigh,val,pos*2+2);
    seg[pos] = seg[pos*2+1] + seg[pos*2+2];
}

int query(int low,int high,int ulow,int uhigh,int pos)
{
    if(low>high) return 0;
    if(lazy[pos]!=0){
        seg[pos] += lazy[pos];
        if(low!=high){
            lazy[pos*2+1] += lazy[pos];
            lazy[pos*2+2] += lazy[pos];
        }
        lazy[pos] = 0;
    }

    if(ulow>high||uhigh<low) return 0;
    //P2(low,high)
    if(ulow<=low&&uhigh>=high)
        return seg[pos];

    int mid = (high+low)/2;

    return query(low,mid,ulow,uhigh,pos*2+1) + query(mid+1,high,ulow,uhigh,pos*2+2);
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,n,m,x,y,sum,q;
    freopen("1112.txt","r",stdin);
    scanf("%d",&ts);
    while(++cas<=ts){
        scanf("%d %d",&n,&q);
        MS(lazy,0)
        MS(seg,0)
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        creat(0,n-1,0);
        printf("Case %d:\n",cas);
        for(i=1;i<=q;i++){
            scanf("%d",&x);
            if(x==1){
                scanf("%d",&a);
                b = query(0,n-1,a,a,0);
                printf("%d\n",b);
                update(0,n-1,a,a,-1*b,0);
            }
            else if(x==2){
                scanf("%d %d",&a,&b);
                update(0,n-1,a,a,b,0);
            }
            else{
                scanf("%d %d",&a,&b);
                printf("%d\n",query(0,n-1,a,b,0));
            }
        }
    }
    return 0;
}

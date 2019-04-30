#include <bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
//#define pii pair<int,int>
#define chk(n,i) (bool)(n&(1<<i))
#define on(n,i) (n|(1<<i))
#define off(n,i) n=n&(~(1<<i))
#define eps 10e-7
#define MX 200005
#define INF 11234567891234567
using namespace std;

struct node{
    ll id,cost;
    node(){}
    node(ll nid,ll ncost)
    {
        id=nid;
        cost=ncost;
    }
    bool operator < (const node&x)const{
        return  cost>x.cost;
    }
};

vector <ll> ed[MX],ec[MX];
ll ds[MX],pr[MX];
void dst(ll s){
    for(int i=0;i<MX;i++) ds[i] = INF;
    priority_queue <node> q;
    q.push(node(s,0));
    ds[s]=0;
    node fn;
    ll i,u,v;
    pr[s] = -1;
    while(!q.empty()){
        fn=q.top();
        q.pop();
        u=fn.id;

        if(fn.cost!=ds[u])continue;
        for(i=0;i<ed[u].size();i++){
            v=ed[u][i];
            if(ds[v]>ds[u]+ec[u][i]){
                pr[v] = u;
                ds[v]=ds[u]+ec[u][i];
                q.push(node(v,ds[v]));
            }
        }
    }
}

vector<int>vc;

void path(int n){
    vc.push_back(n);
    if(n==1) return ;
    path(pr[n]);
}

int main()
{
    ll i,j,a,b,ts,cn=0,cas=0,w,x,y,sum,n,m;
   // freopen("20C.txt","r",stdin);
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=m;i++){
        scanf("%lld %lld %lld",&x,&y,&w);
        ed[x].push_back(y);
        ed[y].push_back(x);
        ec[x].push_back(w);
        ec[y].push_back(w);
    }
    dst(1);
    if(ds[n]>=INF) puts("-1");
    else{
        path(n);
        for(i=vc.size()-1;i>=0;i--){
            if(i==0) printf("%d\n",vc[i]);
            else printf("%d ",vc[i]);
        }
    }
    return 0;
}



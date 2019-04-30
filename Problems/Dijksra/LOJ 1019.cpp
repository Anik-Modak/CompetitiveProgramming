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
#define MX 5005
using namespace std;

struct node{
    int id,cost;
    node(){}
    node(int nid,int ncost)
    {
        id=nid;
        cost=ncost;
    }
    bool operator < (const node&x)const{
        return  cost>x.cost;
    }
};

vector <int> ed[MX],ec[MX];
int ds[MX];
void dst(int s){
    priority_queue <node> q;
    q.push(node(s,0));
    ds[s]=0;
    node fn;
    int i,u,v;
    while(!q.empty()){
        fn=q.top();
        q.pop();
        u=fn.id;
        if(fn.cost!=ds[u])continue;
        for(i=0;i<ed[u].size();i++){
            v=ed[u][i];
            if(ds[v]>ds[u]+ec[u][i]){
                ds[v]=ds[u]+ec[u][i];
                q.push(node(v,ds[v]));
            }
        }
    }
}

void free(){
    for(int i=0;i<=MX;i++){
        ed[i].clear();
        ec[i].clear();
        ds[i] = 1000000000;
    }
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,w,x,y,sum,n,m;
    freopen("1019.txt","r",stdin);
    scanf("%d",&ts);
    while(++cas<=ts){
        free();
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++){
            scanf("%d %d %d",&x,&y,&w);
            ed[x].push_back(y);
            ed[y].push_back(x);
            ec[x].push_back(w);
            ec[y].push_back(w);
        }
        dst(1);
        if(ds[n]>=1000000000) printf("Case %d: Impossible\n",cas);
        else printf("Case %d: %d\n",cas,ds[n]);
    }
    return 0;
}


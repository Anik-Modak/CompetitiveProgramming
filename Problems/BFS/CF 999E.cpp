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
#define MX 10005
using namespace std;

struct node{
    int a,b;
}ara[MX];

vector <int> ed[MX];
int vs[MX];

void bfs(int s){
    int i,j,d,f,v;
    queue <int> q;
    q.push(s);
    vs[s]=1;
    while(!q.empty()){
        f=q.front();
        q.pop();
        for(i=0;i<ed[f].size();i++){
            v=ed[f][i];
            if(!vs[v]){
                vs[v]=1;
                q.push(v);
            }
        }
    }
}

int vis[MX],cnt;

void dfs(int n){
    vis[n] = 1;
    cnt++;
    for(int i=0;i<ed[n].size();i++){
        int v = ed[n][i];
        if(!vis[v]) dfs(v);
    }
}

bool cmp(node A,node B){
    return A.a>B.a;
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,n,m,x,y,sum=0,mx=0,mn=INT_MAX;
    freopen("999.txt","r",stdin);
    cin>>n>>m>>a;
    MS(vs,0);
    for(i=1;i<=m;i++){
        scanf("%d %d",&x,&y);
        ed[x].push_back(y);
    }
    bfs(a);
    for(i=1;i<=n;i++){
        if(!vs[i]){
            MS(vis,0);
            cnt=0;
            dfs(i);
            ara[i].a = cnt;
            //P(ara[i].a)
        }
        ara[i].b = i;
    }
    sort(ara+1,ara+n+1,cmp);
//    for(i=1;i<=n;i++){
//        P2(ara[i].a,ara[i].b);
//    }
    for(i=1;i<=n;i++){
        if(!vs[ara[i].b]){
            bfs(ara[i].b);
            cn++;
           // P2(i,ara[i].b)
        }
    }
    cout<<cn<<endl;
    return 0;
}

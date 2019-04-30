//Anik_Modak
#include<bits/stdc++.h>
#define MX 5005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];

int par[MX];
bool vis[MX];

void dfs(int v,int u)
{
    cout<<v<<" "<<u<<endl;
    if(par[v]==u) return;
	par[v]=u;
    for(int i=0; i<adj[v].size(); i++) dfs(adj[v][i],u);
}

int main()
{
    int n,m,id;
    cin>>n>>m>>id;

    int a,b;
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        adj[a].pb(b);
    }
    dfs(id,id);

    for(int i=1; i<=n; i++)
        if(par[i]==0) dfs(i,i);

    int ans=0;
    for(int i=1; i<=n; i++)
        if(vis[par[i]]==0) vis[par[i]]=1, ans++;

    cout<<ans-vis[id]<<endl;
}

//Anik_Modak
#include<bits/stdc++.h>
#define MX 1005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int par[MX];
bool vis[MX];

int bfs(int source)
{
    mem(vis,0);
    queue <int> vc;
    int a,b;
    vis[source]=1;
    par[source]=-1;
    vc.push(source);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                par[b]=a;
                vis[b]=1;
                vc.push(b);
            }
            else if(par[a]!=b) return 0;
        }
    }
    return 1;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n,m,s;
    cin>>n>>m;

    Clear(adj);
    mem(vis,0);
    mem(par,-1);

    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    if(bfs(1))
    {
        int ans=0;
        for(int i=1; i<=n; i++) if(!vis[i]) ans=1;

        if(ans) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
    else cout<<"no"<<endl;
    return 0;
}


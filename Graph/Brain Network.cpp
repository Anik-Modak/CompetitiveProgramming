//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int level[MX];
bool vis[MX];

int bfs_node(int source)
{
    mem(vis,0);
    queue <int> vc;
    int a,b,mx=0,id=0;

    level[source]=0;
    vis[source]=1;
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
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
                if(mx<=level[b])
                {
                    mx=level[b];
                    id=b;
                }
            }
        }
    }
    return id;
}

int bfs(int source)
{
    mem(vis,0);
    queue <int> vc;
    int a,b,mx=0;
    level[source]=0;
    vis[source]=1;

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
                level[b]=level[a]+1;
                mx=max(level[b],mx);
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return mx;
}

int main()
{
    int n,m,s;
    cin>>n>>m;

    clear(adj);
    mem(level,0);

    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    int ans=0;
    ans=bfs(bfs_node(1));
    cout<<ans<<endl;
    return 0;
}

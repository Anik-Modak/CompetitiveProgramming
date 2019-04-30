//Anik_Modak
#include<bits/stdc++.h>
#define MX 405
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
vector<int> bus[MX];
int level[MX];
bool vis[MX];

int bfs(int source, int stop, vector<int>adj[MX])
{
    queue <int> vc;
    int a,b;
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
            if(vis[b]==0){
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
            if(stop==b) return level[b];
        }
    }
    return 0;
}

int main()
{
    int n,m;
    cin>>n>>m;
    clear(adj);
    clear(bus);
    int a,b;

    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int ch=1;
            for(int k=0; k<adj[i].size(); k++) if(adj[i][k]==j) ch=0;
            if(ch) bus[i].pb(j);
        }
    }
    int ans1,ans2;

    mem(vis,0);
    ans1=bfs(1,n,adj);

    mem(vis,0);
    ans2=bfs(1,n,bus);

    if(ans1==0|| ans2==0) cout<<-1<<endl;
    else cout<<max(ans1,ans2)<<endl;
}



//Anik_Modak
#include<bits/stdc++.h>
#define MAX 10005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MAX; i++) x[i].clear();
#define pb(x) push_back(x)
using namespace std;

vector<int>adj[MAX];
int mar[MAX],par[MAX],ans;

bool vis[MAX];
bool pro[MAX];

void dfs(int u)
{
    vis[u]=1;
    if(pro[u]) return;

    for(int i=0; i<adj[u].size(); i++ )
    {
        int v = adj[u][i];
        if(pro[v]==0&&vis[v]==0)
        {
            par[v]=u;
            dfs(v);
        }
    }
    int cnt=mar[u]-1;
    mar[u]=1;
    pro[u]=1;

    mar[par[u]]+=cnt;
    ans+=abs(cnt);
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        int v,m,d,x;

        for(int i=0; i<n; i++)
        {
            cin>>v>>m>>d;
            mar[v]=m;

            while(d--)
            {
                cin>>x;
                adj[v].pb(x);
                adj[x].pb(v);
            }
        }
        mem(vis,0);
        mem(pro,0);
        ans=0;

        par[1]=1;
        dfs(1);

        cout<<ans<<endl;
        clear(adj);
    }
}

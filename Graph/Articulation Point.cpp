#include <bits/stdc++.h>
using namespace std;

const int MAXX = 107;
vector<int>adj[MAXX];
bool vis[MAXX], AP[MAXX];
int parent[MAXX], tim, low[MAXX], disc[MAXX];

void ini()
{
    int i;
    for(i =0; i<MAXX; i++)
    {
        vis[i]=AP[i]=false; // Initializing AP and vis array as false
        parent[i]=-1;
        adj[i].clear();
    }
    tim=0;
}

void dfs(int u)
{
    vis[u]=true;
    int i;
    low[u]=disc[u]=(++tim);
    int child=0;
    for(i=0; i<adj[u].size(); i++)
    {
        int v=adj[u][i];
        if(vis[v]==false)
        {
            child++;
            parent[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if( (parent[u]!=-1) and ( low[v]>=disc[u] ) )
                AP[u]=true;
            if( (parent[u]==-1) and (child>1))
                AP[u]=true;
        }
        else if(v!=parent[u])
        {
            low[u]=min(low[u],disc[v]);
        }
    }
}

int main()
{
    int n, root;
    while(scanf("%d", &n), n)
    {
        ini();
        int x;
        while(scanf("%d", &x) == 1, x)
        {
            int y;
            char c;
            root = x;
            while(scanf("%d%c", &y, &c) == 2)
            {
                adj[x].push_back(y);
                adj[y].push_back(x);
                if(c == '\n')
                    break;
            }
        }
        dfs(root);
        int c = 0;
        for(int i = 1; i <= n; i++)
            if(AP[i])
                c++;
        printf("%d\n", c);
    }
    return 0;
}

//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define INF INT_MAX
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear()
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
vector <int> Dist;
bool vis[MX];

int find_node(int source)
{
    int mx = 0, node = source;
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        vis[u]= true;
        if(mx<Dist[u])
        {
            mx = Dist[u];
            node  = u;
        }

        for(auto c : adj[u])
        {
            int v = c.first;
            int w = c.second;

            if(!vis[v] && Dist[v] > Dist[u]+w)
            {
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
    return node;
}

int dijkstra(int source)
{
    int mx = 0;
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        vis[u]= true;
        mx = max(mx,Dist[u]);

        for(auto c : adj[u])
        {
            int v = c.first;
            int w = c.second;

            if(!vis[v] && Dist[v] > Dist[u]+w)
            {
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
    //cout<<mx<<endl;
    return mx;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d", &n);
        Clear(adj);

        for(int i=1; i<n; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        mem(vis,0);
        Dist.assign(n+1,INF);
        int node = find_node(1);

        mem(vis,0);
        Dist.assign(n+1,INF);

        int ans = dijkstra(node);
        printf("%d\n",ans);
    }
    return 0;
}

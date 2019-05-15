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
vector <int> Dist, par;
bool vis[MX];

int restore_path(int s, int t, int k)
{
    vector<int> path;
    for (int v = t; v != s; v = par[v])
        path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    return path[k-1];
}

void dijkstra(int source, int ends)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        if(u==ends)
            return;
        vis[u]= true;

        for(auto c : adj[u])
        {
            int v = c.first;
            int w = c.second;

            if(!vis[v] && Dist[v] > Dist[u]+w)
            {
                par[v]=u;
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
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
        getchar();

        for(int i=1; i<=n; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        Dist.assign(n+1,INF);
        par.assign(n+1, -1);

        while(1)
        {
            char s[10];
            scanf("%s",s);

            int u, v, k;
            if(strcmp(s,"DIST")==0)
            {
                scanf("%d%d",&u,&v);
                dijkstra(u,v);
                printf("%d",Dist[v]);
            }
            else if(strcmp(s,"KTH")==0)
            {
                scanf("%d%d%d",&u,&v,&k);
                dijkstra(u,v);
                printf("%d",restore_path(u,v,k));
            }
            else
                break;
        }
    }
    return 0;
}


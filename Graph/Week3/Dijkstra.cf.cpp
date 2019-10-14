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

void restore_path(int s, int t)
{
    vector<int> path;
    for (int v = t; v != s; v = par[v])
        path.push_back(v);
    path.push_back(s);

    reverse(path.begin(), path.end());
    for(int i=0; i<path.size(); i++)
        cout<<path[i]<<" ";
    cout<<endl;
}

int dijkstra(int source, int ends)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        if(u==ends) return 1;
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
    return -1;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i=1; i<=m; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);//
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    Dist.assign(n+1, INF);
    par.assign(n+1, -1);

    if(dijkstra(1,n)==-1) cout<<-1<<endl;
    else restore_path(1,n);

    return 0;
}


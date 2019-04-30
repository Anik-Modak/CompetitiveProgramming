//Anik_Modak
#include<bits/stdc++.h>
#define MX 50005
#define INF INT_MAX
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear()
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
vector <int> Dist;

int find_node(int source)
{
    int mx = 0, node = source;
    Dist.assign(MX,INF);
    priority_queue<pii, vector<pii>, greater<pii> > Q;

    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        for(auto c : adj[u])
        {
            int v = c.first;
            int w = c.second;

            if(Dist[v]==INF)
            {
                Dist[v] = Dist[u] + w;
                Q.push({Dist[v],v});

                if(mx < Dist[v])
                {
                    mx = Dist[v];
                    node  = v;
                }
            }
        }
    }
    return node;
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

        int ans = find_node(find_node(1));
        printf("%d\n",Dist[ans]);
    }
    return 0;
}


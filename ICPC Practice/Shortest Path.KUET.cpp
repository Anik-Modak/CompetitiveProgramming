//Anik_Modak
#include<bits/stdc++.h>
#define MX 30005
#define INF 100000000000000005
#define ll long long
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear()
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector<pii> adj[MX];
vector <ll> Dist;
vector<int> node;
map<pii, ll> mp, mp2;
int sou[MX], sou2[MX];
bool mark[MX];

int bfs(int s)
{
    int e = s;
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist.assign(MX, INF);
    Dist[s] = 0;
    Q.push({0, s});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        if(mark[u]==0)
        {
            mark[u] = 1;
            node.push_back(u);
        }

        for(auto c : adj[u])
        {
            int v = c.first;
            int w = c.second;

            if(Dist[v] > Dist[u]+w)
            {
                e = v;
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
    return e;
}

void dijkstra(int source)
{
    Dist.assign(MX, INF);
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

            if(Dist[v] > Dist[u]+w)
            {
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        for(int i=1; i<=m; i++)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }

        mem(sou, 0);
        mem(sou2, 0);
        mem(mark, 0);

        for(int i=1; i<=n; i++)
        {
            if(!mark[i])
            {
                int s = bfs(i);
                dijkstra(s);
                for (int v = 0; v < node.size(); v ++)
                {
                    sou[node[v]] = s;
                    mp[ {s,node[v]}] = Dist[node[v]];
                }

                int e = bfs(s);
                dijkstra(e);
                for (int v = 0; v < node.size(); v ++)
                {
                    sou2[node[v]] = e;
                    mp2[ {e,node[v]}] = Dist[node[v]];
                }
                node.clear();
            }
        }

        int q, s, d;
        scanf("%d",&q);

        printf("Case %d:\n",++cas);
        while(q--)
        {
            scanf("%d%d",&s, &d);
            if(sou[s] != sou[d])
                printf("-1\n");
            else
            {
                ll ans1 = mp[ {sou[d], d}] - mp[ {sou[s],s}];
                if(ans1 <= 0)
                    ans1 = mp[ {sou[d], d}] + mp[ {sou[s],s}];

                ll ans2 = mp2[ {sou2[d], d}] - mp2[ {sou2[s],s}];
                if(ans2 <= 0)
                    ans2 = mp2[ {sou2[d], d}] + mp2[ {sou2[s],s}];
                //cout<<sou[s]<<" "<<sou2[s]<<endl;
                //cout<<ans1<<" "<<ans2<<endl;
                printf("%lld\n",min(ans1, ans2));
            }
        }

        Clear(adj);
        mp.clear();
        mp2.clear();
    }
    return 0;
}


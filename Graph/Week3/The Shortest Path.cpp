//@Anik_Modak
#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define MX 10005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector <pii> adj[MX];
vector <int> Dist;

void dijkstra(int source)
{
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        for(auto &c : adj[u])
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
    int t,ca;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n;
        cin>>n;

        map<string, int> mp;
        Clear(adj);

        for(int i=1; i<=n; i++)
        {
            string s;
            cin>>s;
            mp[s]=i;

            int a, b, c;
            cin>>a;

            for(int j=1; j<=a; j++)
            {
                cin>>b>>c;
                adj[i].push_back({b,c});
                adj[b].push_back({i,c});
            }
        }

        int q;
        cin>>q;

        while(q--)
        {
             string s1, s2;
             cin>>s1>>s2;

             Dist.assign(MX,INF);
             dijkstra(mp[s1]);
             cout<<Dist[mp[s2]]<<endl;
        }
    }
    return 0;
}


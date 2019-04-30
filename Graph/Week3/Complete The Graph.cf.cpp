//Anik_Modak
#include<bits/stdc++.h>
#define MX 10005
#define INF INT_MAX
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(ll i = 0; i < MX; i++) x[i].clear();
#define pii pair<long long,long long>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector<pii>adj[MX];
vector <ll> Dist;
bool vis[MX];

struct st
{
    ll x,y,z;
};

ll dijkstra(ll source, ll ends, ll total)
{
    ll ck=-1, dis=total;
    priority_queue<pii, vector<pii>, greater<pii> > Q;
    Dist[source] = 0;
    Q.push({0,source});

    while(!Q.empty())
    {
        ll u = Q.top().second;
        Q.pop();
        vis[u]= true;

        for(auto c : adj[u])
        {
            ll v = c.first;
            ll w = c.second;

            if(!vis[v] && Dist[v]> Dist[u]+w)
            {
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});

                if(v==ends)
                {
                    if(Dist[v]>total || total-dis>Dist[v]) ck=-1;
                    else
                    {
                        ck=u;
                        dis=total-Dist[v];
                    }
                }
            }
            else if(v==ends && total>Dist[u]+w) ck=-1;
        }
    }
    return ck;
}

int main()
{
    ll n, m, l, s, t;
    cin>>n>>m>>l>>s>>t;

    st ans[m];
    for(int i=0; i<m; i++)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});

        ans[i].x=a;
        ans[i].y=b;
        ans[i].z=c;
    }

    Dist.assign(n+1,INF);
    ll ck = dijkstra(s,t,l);

    if(ck==-1) cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(int i=0; i<m; i++)
        {
            if((ans[i].x==ck&&ans[i].y==t)||(ans[i].x==t&&ans[i].y==ck)) ans[i].z +=(l-Dist[t]);
            cout<<ans[i].x<<" "<<ans[i].y<<" "<<ans[i].z<<endl;
        }
    }

    return 0;
}



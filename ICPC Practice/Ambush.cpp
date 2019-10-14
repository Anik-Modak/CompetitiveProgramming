//Anik_Modak
#include<bits/stdc++.h>
#define MX 2005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
map<int, int>mp;
int lev[MX], in[MX];
bool vis[MX];

void bfs(int s, int t)
{
    queue <int> vc;
    int a, b;
    vis[s] = 1;
    lev[s] = 1;
    vc.push(s);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();

        int len = adj[a].size();
        mp[lev[a]] += len - in[a];

        for(int i=0; i<len; i++)
        {
            b = adj[a][i];
            in[b] ++;

            if(vis[b]==0)
            {
                lev[b] = lev[a] + 1;
                vis[b]=1;
                vc.push(b);
            }
        }
    }
}

void init()
{
    mem(in, 0);
    mem(vis, 0);
    Clear(adj);
    mp.clear();
}

int main()
{
    freopen("input.txt","r",stdin);
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, m, s, t, k;
        scanf("%d %d %d %d %d", &n, &m, &s, &t, &k);

        init();
        for(int i=1; i<=m; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        bfs(s, t);
        int mn = adj[t].size();
        for(int i=1; i<=n; i++)
        {
            //cout<<mp[lev[i]]<<endl;
            if(lev[i] < lev[t])
                mn = min(mp[lev[i]], mn);
        }

        ll ans, d = ceil(k/3.0);
        ans = d * mn;
        printf("%lld\n",ans);
    }
    return 0;
}


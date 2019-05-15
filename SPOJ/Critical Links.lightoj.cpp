//Anik_Modak
#include <bits/stdc++.h>
#define pii pair<int,int>
#define MX 10005
#define Clear(x) for(int i=0 ; i<=MX ; i++) x[i].clear() ;
using namespace std;

vector<int> adj[MX];
vector<int> tin, low;
vector<bool> visited;
vector<pii> ans;
int timer;

void dfs(int v, int p = -1)
{
    visited[v] = true;
    tin[v] = low[v] = timer++;
    for (int to : adj[v])
    {
        if (to == p)
            continue;
        if (visited[to])
        {
            low[v] = min(low[v], tin[to]);
        }
        else
        {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v])
                ans.push_back({v, to});
        }
    }
}

void find_bridges(int n)
{
    timer = 0;
    visited.assign(n, false);
    tin.assign(n, -1);
    low.assign(n, -1);
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
            dfs(i);
    }
}

bool cmp(pii a, pii b)
{

}

int main()
{
    int t, cas = 0;
    //freopen("input.txt","r",stdin);
    scanf("%d",&t);

    while(t--)
    {
        int n;
        scanf("%d",&n);

        for(int i=0; i<n; i++)
        {
            int x, m, y;
            scanf("%d (%d)",&x,&m);

            while(m--)
            {
                scanf("%d",&y);
                //cout<<x<<" "<<y<<endl;
                adj[x].push_back(y);
                adj[y].push_back(x);
            }
        }

        find_bridges(n);
        printf("Case %d:\n%d critical links\n", ++cas, ans.size());

        sort(ans.begin(),ans.end(), cmp);
        for(int i=0; i<ans.size(); i++)
        {
            int u = ans[i].first, v = ans[i].second;
            printf("%d - %d\n",u, v);
        }

        ans.clear();
        Clear(adj);
    }
    return 0;
}


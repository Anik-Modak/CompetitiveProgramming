//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

vector <int> g[MX], gr[MX];
vector<bool> vis;
vector<int> order,comp;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void dfs1(int s)
{
    vis[s] = 1;
    for(int u : g[s])
        if(!vis[u])
            dfs1(u);
    order.push_back(s);
}

void dfs2(int s)
{
    vis[s] = 1;
    comp.push_back(s);
    for(int u : gr[s])
        if(!vis[u])
            dfs2(u);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m, cas=0;
    cin>>n>>m;

    Clear(g);
    Clear(gr);
    order.clear();
    comp.clear();

    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;

        g[a].push_back (b);
        gr[b].push_back (a);
    }

    vis.assign (n+1, false);
    for (int i=1; i<=n; ++i)
        if (!vis[i])
            dfs1(i);
    reverse(order.begin(), order.end());

    int ans = 0;
    vis.assign (n+1, false);
    for (int i=0; i<order.size(); i++)
    {
        int v = order[i];
        if (!vis[v])
        {
            comp.clear();
            dfs2 (v);
        }
    }

    cout<<comp.size()<<endl;
    sort(comp.begin(),comp.end());
    for(int i=0; i<comp.size(); i++)
    {
        cout<<comp[i]<<" ";
    }
    cout<<endl;
    return 0;
}

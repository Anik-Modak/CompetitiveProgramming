//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
bool vis[MX];

void dfs_fin(int v)
{
    vis[v] = true;
    for (auto to : adj[v])
        if (!vis[to])
            dfs_fin(to);
    //fin.push_back(v);
}

void dfs(int v)
{
    for (auto to : adj[v])
    {
        if(!vis[to])
        {
            vis[to] = true;
            dfs(to);
        }
    }
}

int main()
{
    int t;
    while(cin>>t && t!=0)
    {
        Clear(adj);
        vector<int>ans;

        int n, m;
        while(cin>>n && n!=0)
        {
            while(cin>>m && m!=0)
                adj[n].pb(m);
        }

        int q, s;
        cin>> q;

        while(q--)
        {
            cin>>s;

            ans.clear();
            mem(vis,0);
            dfs(s);

            for(int i=1; i<=t; i++)
                if(!vis[i]) ans.pb(i);

            cout<<ans.size();
            for(int i=0; i<ans.size(); i++)
                cout<<" "<<ans[i];
            cout<<endl;
        }
    }
}




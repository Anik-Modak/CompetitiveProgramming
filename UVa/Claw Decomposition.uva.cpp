//Anik_Modak
#include<bits/stdc++.h>
#define MX 505
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int lev[MX];
bool vis[MX];

int bfs(int source)
{
    mem(vis,0);
    queue <int> vc;

    int a, b;
    vis[source] = 1;
    lev[source] = 0;
    vc.push(source);

    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                vis[b] = 1;
                lev[b] = lev[a] + 1;
                vc.push(b);
            }
            else if(lev[a]%2 == lev[b]%2)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    while(cin>>n && n)
    {
        int a, b, cnt[n+2] = {0};
        while(cin>>a>>b && a|b)
        {
           adj[a].push_back(b);
           adj[b].push_back(a);
        }

        if(bfs(1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
        Clear(adj);
    }
    return 0;
}

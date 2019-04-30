//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define input() freopen("input2.txt","r",stdin);
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];

int level[MX];
bool vis[MX];

void bfs(int source, int TTL)
{
    queue <int> qu;
    int a,b,c=0;
    level[source]=0;
    vis[source]=1;
    qu.push(source);

    while(!qu.empty())
    {
        a=qu.front();
        qu.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0&&TTL>=level[a]+1)
            {
                level[b]=level[a]+1;
                vis[b]=1;
                qu.push(b);
            }
        }
    }
    return ;
}

int main()
{
    input();
    int n, ca=0;
    while(cin>>n && n!=0)
    {
        Clear(adj);
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);

            mp[a];
            mp[b];
        }

        int start, TTL;
        while(1)
        {
            cin>>start>>TTL;
            if(start==0&&TTL==0)
                break;

            mem(vis,0);
            bfs(start,TTL);

            int ans=0;
            map<int,int> ::iterator it;
            for(it=mp.begin(); it!=mp.end(); it++)
                if(vis[it->first]==0) ans++;

            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++ca,ans,start,TTL);
        }
    }
}




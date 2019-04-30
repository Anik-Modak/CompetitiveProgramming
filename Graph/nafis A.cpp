//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
int level[MX];
bool vis[MX];

int bfs(int source)
{
    queue <int> vc;
    int a,b,mx=0;
    level[source]=1;
    vis[source]=1;

    vc.push(source);
    while(!vc.empty())
    {
        a=vc.front();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0){
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
            if(mx<level[b]) mx=level[b];
        }
    }
    return mx;
}

int main()
{
    int n;
    cin>>n;
    clear(adj);
    int a[n+2];

    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j*i<=n; j++)
        {
            if(a[j*i+a[i]]>a[i]) adj[a[i]].pb(a[j*i+a[i]]);
        }
    }

    for(int i=1; i<=n; i++)
    {
        mem(vis,0);
        mem(level,0);
        int tmp=bfs(i);
        if(tmp%2) cout<<"B";
        else cout<<"A";
    }
    cout<<endl;
}

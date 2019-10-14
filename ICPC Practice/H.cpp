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

int bfs(int s, int t)
{
    //cout<<s<<" "<<t<<endl;
    queue <int> vc;
    int a, b;
    vis[s] = 1;

    vc.push(s);
    while(!vc.empty())
    {
        a = vc.front();
        vc.pop();

        if(a == t)
            return 1;

        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        char a, b;
        cin>>a>>b;
        adj[a-'a'].pb(b-'a');
    }

    for(int i=0; i<m; i++)
    {
        string a, b;
        cin>>a>>b;

        if(a.size() != b.size())
        {
            cout<<"no\n";
            continue;
        }

        int ck = 1;
        for(int j=0; j<a.size() && ck; j++)
        {
            mem(vis, 0);
            ck = bfs(a[j]-'a', b[j]-'a');
        }

        if(ck)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }

    Clear(adj);
    return 0;
}

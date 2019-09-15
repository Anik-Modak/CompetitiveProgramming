//Anik_Modak
#include<bits/stdc++.h>
#define MX 1007
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
#define eps 0.0000001
using namespace std;

vector <int> adj[MX];
bool vis[MX];

int bfs(int source, int tk[], int avg)
{
    queue <int> vc;
    vis[source]=1;
    vc.push(source);
    int cnt = 1, sum = tk[source];

    while(!vc.empty())
    {
        int a,  b;
        a=vc.front();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0)
            {
                cnt ++;
                sum += tk[b];
                vis[b]=1;
                vc.push(b);
            }
        }
    }

    int d = abs((double)sum/cnt - (sum/cnt));
    if(sum > 0 && d <= eps && sum/cnt == avg)
        return 1;
    else
        return 0;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int t, ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        int n, m;
        cin>>n>>m;

        int tk[n+2], sum=0;
        for(int i=1; i<=n; i++)
        {
            cin >> tk[i];
            sum += tk[i];
        }

        for(int i=1; i<=m; i++)
        {
            int a, b;
            cin>>a>>b;
            adj[a].pb(b);
            adj[b].pb(a);
        }

        if(sum==0)
        {
            printf("Case %d: Yes\n",ca);
            continue;
        }
        else if(abs((double)sum/n - (sum/n)) > eps)
        {
            printf("Case %d: No\n",ca);
            continue;
        }

        mem(vis, 0);
        int avg = sum / n, ans = 1;

        for(int i=1; i<=n; i++)
        {
            if(!vis[i] && ans)
                ans = bfs(i, tk, avg);
        }

        if(ans)
            printf("Case %d: Yes\n",ca);
        else
            printf("Case %d: No\n",ca);
        Clear(adj);
    }
    return 0;
}


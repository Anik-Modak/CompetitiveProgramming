//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
#define INF 100000000
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x) for(int i = 0; i < MX; i++) x[i]=INF;
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)
using namespace std;

int dist[MX][MX];

void init(int V)
{
    for (int i = 1; i <= V; i++)
    {
        for (int j = 1; j <= V; j++)
        {
            if(i==j)
                dist[i][j] = 0;
            else
                dist[i][j] = INF;
        }
    }
}

double floydWarshall(int n)
{
    for (int k = 1; k <= n; ++k)
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

            }
        }
    }

    double sum = 0.0, cnt=0.0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (dist[i][j] < INF && dist[i][j])
            {
                sum+=dist[i][j];
                cnt++;
            }
        }
    }
    return sum/cnt;
}

int main()
{
    //input();
    init(100);
    int a, b, mx=0, cas=0;
    while(scanf("%d %d",&a, &b)==2)
    {
        mx=max(mx,max(a,b));
        if(mx==0) break;

        dist[a][b]=1;
        if(a==0 && b==0)
        {
            double ans = floydWarshall(mx);
            printf("Case %d: average length between pages = %.3f clicks\n",++cas,ans);
            init(100);
            mx=0;
        }
    }
    return 0;
}




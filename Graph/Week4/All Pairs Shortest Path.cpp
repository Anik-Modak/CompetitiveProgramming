//Anik_Modak
#include<bits/stdc++.h>
#define MX 155
#define INF 100000000
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x) for(int i = 0; i < MX; i++) x[i]=INF;
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)
using namespace std;

int dist[MX][MX];

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void init(int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if(i==j) dist[i][j] = 0;
            else dist[i][j] = INF;
        }
    }
}

void floydWarshall(int n)
{
    for (int k = 0; k < n; ++k)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (dist[i][k] < INF && dist[k][j] < INF)
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

            }
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            for (int t = 0; t < n; ++t)
            {
                if (dist[i][t] < INF && dist[t][t] < 0 && dist[t][j] < INF)
                    dist[i][j] = - INF;
            }
        }
    }
}

int main()
{
    faster();
    int V, E, Q, cas=0;
    while(cin>>V>>E>>Q)
    {
        if(V==0 && E==0 && Q==0)
            break;

        init(V);
        for(int i=0; i<E; i++)
        {
            int a, b, c;
            cin>>a>>b>>c;
            dist[a][b]=min(c,dist[a][b]);
        }

        if(cas)
            cout<<endl;
        ++cas;

        floydWarshall(V);
        while(Q--)
        {
            int s, t;
            cin>>s>>t;

            if(dist[s][t]==-INF)
                cout<<"-Infinity"<<endl;
            else if(dist[s][t]==INF)
                cout<<"Impossible"<<endl;
            else
                cout<<dist[s][t]<<endl;
        }
    }
    return 0;
}



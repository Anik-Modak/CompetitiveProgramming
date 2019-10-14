//Anik_Modak
#include<bits/stdc++.h>
#define MX 305
#define INF 1000000
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x) for(int i = 0; i < MX; i++) x[i]=INF;
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)
using namespace std;

int dist[MX][MX];
map<int, int>mp;

void init(int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if(i==j)
                dist[i][j] = 0;
            else
                dist[i][j] = INF;
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
}

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);

    int V, E;
    while(cin>>V && V)
    {
        init(V);
        cin>>E;
        for(int i=0; i<E; i++)
        {
            int a, b;
            cin>>a>>b;
            dist[a][b] = min(dist[a][b], 1);
            dist[b][a] = dist[a][b];
        }

        floydWarshall(V);
        for (int i = 0; i < V; ++i)
        {
            for (int j = 0; j < V; ++j)
            {
                //cout<<dist[i][j]<<endl;
                if(dist[i][j] != INF && i != j)
                    mp[dist[i][j]] ++;
            }
        }

        for(auto it=mp.begin(); it!=mp.end(); it++)
            cout<<it->first<<" "<<it->second<<"\n";
        mp.clear();
    }
    return 0;
}




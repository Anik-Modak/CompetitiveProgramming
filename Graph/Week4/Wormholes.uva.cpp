//Anik_Modak
#include<bits/stdc++.h>
#define MX 1005
#define INF INT_MAX;
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x) for(int i = 0; i < MX; i++) x[i]=INF;
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)
using namespace std;

int dis[MX];
struct Edge
{
    int a, b, c;
}edge[2*MX];

bool BellmanFord(int V, int E, int s)
{
    dis[s] = 0;
    for(int i = 1; i <= V-1; i++)
    {
        for(int j = 0; j < E; j++)
        {
            int u = edge[j].a;
            int v = edge[j].b;
            int w = edge[j].c;

            if (dis[u] + w < dis[v])
                dis[v] = dis[u] + w;
            //cout<<v<<" "<<dis[v]<<endl;
        }
    }

    //FinalSolution(V);
    for(int i = 0; i < E; i++)
    {
        int u = edge[i].a;
        int v = edge[i].b;
        int w = edge[i].c;

        if (dis[u] + w < dis[v])
            return 0;
    }
    return 1;
}

int main()
{
    //input();
    int t;
    cin>>t;

    while(t--)
    {
        int V, E, S;
        cin>>V>>E;

        for(int i=0; i<E; i++)
        {
            cin>>edge[i].a>>edge[i].b>>edge[i].c;
        }

        set(dis);
        if(!BellmanFord(V,E,0)) cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;
    }
}


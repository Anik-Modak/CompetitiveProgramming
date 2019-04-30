//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
bool DLS(int node, int goal, int depth)
{
    if (node == goal)
    {
        return true;
    }

    if (depth == 0)
    {
        return false;
    }

    for (int Node: adj[node])
    {
        if (DLS(Node, goal, depth - 1))
        {
            return true;
        }
    }
    return false;
}

bool IDDFS(int node, int maxDepth, int goal)
{
    for (int depth = 0; depth <= maxDepth; ++depth)
    {
        if (DLS(node, goal, depth))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].pb(b);
    }

    if(IDDFS(1,n,4))
        cout<<"Possible"<<endl;
    else
        cout<<"Impossible"<<endl;
}




#include <bits/stdc++.h>
using namespace std;

int mn;
class Graph
{
    int V;
    list<int>* adj;
    void minEdgeDFSUtil(vector<bool>& visited,
                        int src, int des, int& min_num_of_edges,
                        int& edge_count);
public:
    Graph(int V);
    void addEdge(int src, int des);
    void minEdgeDFS(int u, int v);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int src, int des)
{
    adj[src].push_back(des);
    adj[des].push_back(src);
}

void Graph::minEdgeDFSUtil(vector<bool>& visited,
                           int src, int des, int& min_num_of_edges,
                           int& edge_count)
{
    visited[src] = true;
    if (src == des)
    {
        if (min_num_of_edges > edge_count)
            min_num_of_edges = edge_count;
    }

    else
    {
        list<int>::iterator i;
        for (i = adj[src].begin(); i != adj[src].end(); i++)
        {
            int v = *i;
            if (!visited[v])
            {
                edge_count++;
                minEdgeDFSUtil(visited, v, des, min_num_of_edges, edge_count);
            }
        }
    }
    visited[src] = false;
    edge_count--;
}

void Graph::minEdgeDFS(int u, int v)
{
    vector<bool> visited(V, false);
    int min_num_of_edges = INT_MAX;
    int edge_count = 0;

    minEdgeDFSUtil(visited, u, v, min_num_of_edges, edge_count);
    cout<<min_num_of_edges<<endl;
    mn = min_num_of_edges;
}

int main()
{
    freopen("input.txt","r",stdin);
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, m, s, t, k;
        scanf("%d %d %d %d %d", &n, &m, &s, &t, &k);

        Graph g(n+1);
        for(int i=1; i<=m; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            g.addEdge(a, b);
        }

        g.minEdgeDFS(s, t);
        int ans, d = ceil(k/3.0);
        ans = d * mn;
        printf("%d\n",ans);
    }
    return 0;
}

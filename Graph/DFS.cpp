void Graph::DFS(int x, int required)
{
    stak s;
    bool *visited = new bool[n+1];
    int i;
    for(i = 0; i <= n; i++)
        visited[i] = false;
    s.push(x);
    visited[x] = true;
    if(x == required) return;
    cout << " Depth first Search starting from vertex ";
    cout <<  x << " : " << endl;
    while(!s.isEmpty())
    {
        int k = s.pop();
        if(k == required) break;
        cout<<k<<" ";
        for (i = n; i >= 0 ; --i)
            if (isConnected(k, i) && !visited[i])
            {
                s.push(i);
                visited[i] = true;
            }
    }
    cout<<endl;
    delete [] visited;
}
int deg[N];
bool used[N];
vector<int> comp;
vector<int> g[N];

void dfs(int v) {
	used[v] = true;
	comp.push_back(v);

	for (auto to : g[v])
		if (!used[to])
			dfs(to);
}
void dfs(int v,int u)
{
    if(par[v]==u) return;
	par[v]=u;
    for(int i=0; i<adj[v].size(); i++) dfs(adj[v][i],u);
}

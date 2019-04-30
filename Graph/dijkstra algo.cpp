//@Anik_Modak
#include<bits/stdc++.h>
#define MX 100000
#define mem(x,y) memset(x,y,sizeof(x));
#define clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[MX];
vector<int> cost[MX];
int dis[MX];

void dijkstra(int source)
{
    priority_queue <int> vc;
    int a,b,c;

    dis[source]=0;
    vc.push(source);
    while(!vc.empty())
    {
        a=vc.top();
        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(dis[a] + cost[a][i] < dis[b]){
                dis[b] = dis[a] + cost[a][i];
                vc.push(b);
            }
        }
    }
    return;
}

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;
    for(ca=1;ca<=t;ca++)
    {
        int n;
        cin>>n;
        clear(adj);
        clear(cost);
        int a,b,c;

        for(int i=0; i<n; i++)
        {
            cin>>a>>b>>c;
            adj[a].pb(b);
            cost[a].pb(c);
        }
        set(dis,MX);
        dijkstra(1);
        for(int i=1; i<=n; i++) cout<<dis[i]<<endl;
    }
}

// Time complexity : O(ElogV)
#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;
#define INF 0x3f3f3f3f

vii *G;   // Graph
vi Dist;  // for storing the distance of every other node from source.
/*==========================================*/
void Dijkstra(int source, int N) {
    priority_queue<pii, vector<pii>, greater<pii> > Q;   // min heap
    Dist.assign(N,INF);
    Dist[source] = 0;
    Q.push({0,source});
    while(!Q.empty()){
        int u = Q.top().second;
        Q.pop();
        for(auto &c : G[u]){
            int v = c.first;
            int w = c.second;
            if(Dist[v] > Dist[u]+w){
                Dist[v] = Dist[u]+w;
                Q.push({Dist[v],v});
            }
        }
    }
}
/*===========================================*/
int main() {
    int N, M, u, v, w, source;  // N-total no of nodes, M-no. of edges,
    cin >> N >> M;              // u,v and w are the end vertices and the weight associated with an edge
    G = new vii[N+1];

    for(int i=0;i<M;++i){
        cin >> u >> v >> w;
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    cin >> source;
    Dijkstra(source,N);

    for(int i=0;i<N;i++)
        cout<<Dist[i]<<" ";
    cout<<endl;

    return 0;
}
/* Dijkstra algorithm for Undirected Graph, time complexity : O(|E|.log|V|)  */
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector< pii > vii;
#define INF 0x3f3f3f3f
vii *G;    // Graph
vi D;      // distance vector for storing min distance from the source.
/*=======================================*/
void dijkstra(int source, int N) {
    D.assign(N,INF);
    D[source] = 0;
    set<pii> Q;
    Q.insert({0,source});
    while(!Q.empty()) {
        auto top = Q.begin();
        int u = top->second;
        Q.erase(top);
        for(auto next: G[u])    {
            int v = next.first, weight = next.second;
            if( D[v] > D[u] + weight) {
                if(Q.find( {D[v], v} ) != Q.end())
                Q.erase(Q.find( {D[v], v} ));
                D[v] = D[u] + weight;
                Q.insert( {D[v], v} );
            }
        }
    }
}
/*==========================================*/
int main(){
    int N,M,source,u,v,w;
    cin >> N >> M >> source;
//Input the number of nodes(0 based), number of edges and the source vertex.
    G = new vii[N];
    for(int i=0;i<M;i++){
        cin >> u >> v >> w;
//Input the starting vertex of the edge, the ending vertex and the cost of the edge.
        G[u].push_back({v,w});
        G[v].push_back({u,w});
    }
    dijkstra(source, N);

    for(int i=0;i<N;i++)
        cout<<D[i]<<" ";
    cout<<endl;
}

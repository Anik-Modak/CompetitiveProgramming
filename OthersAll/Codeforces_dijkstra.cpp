#include <bits/stdc++.h>
#define par pair<int, int>
#define MAX 100007
#define mem(x,y) memset(x,y,sizeof(x));
#define inf INT_MAX
using namespace std;

vector<par>adj[MAX];
vector<int>dst;
bool visited[MAX];
int n, m;
int p[MAX];

void dijkstra(int source, int goal){
    priority_queue<par, vector<par>,greater<par>>q;
    dst[source]=0;
    q.push({0,source});
    p[source]=-1;
    visited[source]=true;
    while(!q.empty()){
        int u=q.top().second;
        visited[u]=true;
        q.pop();
        for(auto m: adj[u]){
            int v=m.first; //v node adjacent of u
            int w=m.second; //w weight.
            if(!visited[v] && dst[v]>dst[u]+w){
                dst[v]=dst[u]+w;
                p[v]=u;
                q.push({dst[v],v});
            }

        }
    }
}
void print_path(int n){
    vector<int>path;
    for(int v=n;v!=-1;v=p[v]){
        path.push_back(v);
    }
    reverse(path.begin(),path.end());
    for(int i=0; i<path.size();i++){
        if(i==path.size()-1){
            printf("%d\n",path[i]);
        }else{
            printf("%d ",path[i]);
        }
    }
}
int main(){
    scanf("%d %d",&n,&m);
    mem(visited,false);
    int a,b,w;
    while(m--){
        scanf("%d %d %d",&a,&b,&w);
        adj[a].push_back(par(b,w));
        adj[b].push_back(par(a,w));
    }
    dst.assign(n+1,inf);
    dijkstra(1,n);
    if(visited[n]==true){
        print_path(n);
    }else{
        printf("-1\n");
    }
    return 0;
}

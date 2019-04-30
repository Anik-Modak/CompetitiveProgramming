#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100];
int level[100];
bool vis[100];

void bfs(int source)
{
    queue <int> vc;
    int a,b,c;
    level[source]=0;
    vis[source]=1;
    vc.push(source);
    while(!vc.empty()){
        a=vc.front();
        vc.pop();
        for(int i=0;i<adj[a].size();i++){
            b=adj[a][i];
            if(vis[b]==0){
                level[b]=level[a]+1;
                vis[b]=1;
                vc.push(b);
            }
        }
    }

    return;
}

int main(void)
{
    int tes,cn=0,a,b,N;
    scanf("%d",&tes);
    while(tes--){
        scanf("%d",&N);
        for(int i=0;i<N-1;i++){
            scanf("%d %d",&a,&b);
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

    }
}

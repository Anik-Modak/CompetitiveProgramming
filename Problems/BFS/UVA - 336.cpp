#include<bits/stdc++.h>
using namespace std;
map <int,int> visited;

void bfs(int start, map <int,vector<int> > graph) {
    queue<int> s;
    s.push(start);
    visited[start]=0;
    while (s.empty() == false) {
        int top = s.front();
        s.pop();
        int size = graph[top].size();
        for(int i=0;i<size;i++){
            int n =graph[top][i];
            if(!visited.count(n)){
                visited[n]=visited[top]+1;
                s.push(n);
            }
        }
     }
}

int main(){
    int nods,a,b,cases=1;
    freopen("336.cpp","r",stdin);
    while(scanf("%d",&nods) && nods){
             map <int,vector<int> > graph;
             for(int i=0;i<nods;i++){
                     scanf("%d %d",&a,&b);
                     graph[a].push_back(b);
                     graph[b].push_back(a);
             }
             int ttl,start;
             while(scanf("%d %d",&start,&ttl) && (start!=0 || ttl!=0)){
                map <int,int>::const_iterator itr;
                visited.clear();
                bfs(start,graph);
                int result = 0;
                 for(itr = visited.begin(); itr != visited.end(); ++itr){
                    if((*itr).second>ttl)++result;
                 }
                 result += graph.size()-visited.size();
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases,result,start,ttl);
                cases++;
             }

    }
 return 0;

}

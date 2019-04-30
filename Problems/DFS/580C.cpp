#include<bits/stdc++.h>
#define MX 100005
using namespace std;

vector<int>ed[MX];
int lev[MX],cat[MX],vs[MX],n,m;

int bfs(){
    int i,f,v,cn=0;
    queue<int>q;
    vs[1] = 1;
    q.push(1);
    lev[1] = cat[1];
    while(!q.empty()){
        f = q.front();
        q.pop();
        for(i=0;i<ed[f].size();i++){
            v = ed[f][i];
            if(!vs[v]){
                vs[v] = 1;

                lev[v] = cat[v];
                if(cat[f]&&cat[v]) lev[v] += lev[f];

                if(lev[v]<=m) q.push(v);

                if(ed[v].size()==1&&lev[v]<=m&&ed[v][0]==f){
                    cn++;
                }
            }
        }
    }
    return cn;
}

int main(){
    int i,j,k,x,y;

    cin>>n>>m;

    for(i=1;i<=n;i++){
        scanf("%d",&cat[i]);
    }
    for(i=1;i<n;i++){
        scanf("%d %d",&x,&y);
        ed[x].push_back(y);
        ed[y].push_back(x);
    }
    cout<<bfs()<<endl;
}

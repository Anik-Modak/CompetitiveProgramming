#include<bits/stdc++.h>

using namespace std;

vector <int> ed[1005];
int avs[1005],ara[1005];
bool mark[1005];

void bfs(int s){
    int i,j,d,f,v;
    queue <int> q;
    q.push(s);
    memset(mark,0,sizeof mark);
    mark[s]=1;
    avs[s]++;
    while(!q.empty()){
        f=q.front();
        q.pop();
        for(i=0;i<ed[f].size();i++){
            v=ed[f][i];
            if(!mark[v]){
                mark[v]=1;
                q.push(v);
                avs[v]++;
            }
        }
    }
}

void fill(){
    int i;
    for(i=0;i<=1002;i++){
        ed[i].clear();
        avs[i] = 0;
        mark[i] = 0;
        ara[i] = 0;
    }
}

int main(){

    int i,j,k,ts,cas=0,n,m,x,y,ans=0;

    cin>>ts;
    while(++cas<=ts){
        fill();
        ans = 0;
        scanf("%d %d %d",&k,&n,&m);
        for(i=1;i<=k;i++)
            scanf("%d",&ara[i]);
        for(i=1;i<=m;i++){
            scanf("%d %d",&x,&y);
            ed[x].push_back(y);
        }
        for(i=1;i<=k;i++){
            bfs(ara[i]);
        }
        for(i=0;i<=n;i++){
            if(avs[i] == k) ans++;
        }
        printf("Case %d: %d\n",cas,ans);
    }
    return 0;
}

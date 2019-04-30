#include<bits/stdc++.h>
#define MX 10009
#define INF 100000005
using namespace std;

struct node{
    int id,cost;
    node(){}
    node(int nid,int ncost)
    {
        id=nid;
        cost=ncost;
    }
    bool operator < (const node&x)const{
        return  cost>x.cost;
    }
};

vector <int> ed[10009],ec[10009];
int ds[10009]; /// ds should intialize with infinity
void dxt(int s){
    priority_queue <node> q;
    q.push(node(s,0));
    ds[s]=0;
    node fn;
    int i,u,v;
    while(!q.empty()){
        fn=q.top();
        q.pop();
        u=fn.id;
        if(fn.cost!=ds[u])continue; ///first update er por jodi onno kono update hote chay seita block kore
        for(i=0;i<ed[u].size();i++){
            v=ed[u][i];
            if(ds[v]>ds[u]+ec[u][i]){
                ds[v]=ds[u]+ec[u][i];
                q.push(node(v,ds[v]));
            }
        }
    }
}


void free(){
    int i;
    for(i=0;i<MX;i++){
        ed[i].clear();
        ec[i].clear();
        ds[i] = INF;
    }
}

int main(){

    int cas=0,ts,i,j,k,a,b,c,x,y,w,n,m;
    cin>>ts;
    while(++cas<=ts){
        scanf("%d %d",&n,&m);
        free();
        for(i=1;i<=m;i++){
            scanf("%d %d %d",&a,&b,&c);
            ed[a].push_back(b);
            //ed[b].push_back(a);
            ec[a].push_back(c);
            //ec[b].push_back(c);
        }
        scanf("%d %d",&a,&b);
        dxt(a);
        if(ds[b]>=INF) puts("NO");
        else printf("%d\n",ds[b]);
    }
    return 0;
}

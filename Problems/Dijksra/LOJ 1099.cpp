#include <bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
//#define pii pair<int,int>
#define chk(n,i) (bool)(n&(1<<i))
#define on(n,i) (n|(1<<i))
#define off(n,i) n=n&(~(1<<i))
#define eps 10e-7
#define MX 5005
using namespace std;

vector<int>ed[MX],ec[MX];
int lev[MX],lev1[MX],n,m,k,d;

struct pii{
    int first,second;
    pii(){}
    pii(int n,int m){
        first = n;
        second = m;
    }
};
bool operator<(pii a,pii b){
    return a.second>b.second;
}

int dst(int st){
    int i,v,f,x,wt,cn=0;
    pii pr;
    priority_queue<pii>q;
    q.push(pii(st,0));
    lev[st] = 0;
    while(!q.empty()){
        pr = q.top();
        f = pr.first;
        q.pop();
       // P(f)
        if(lev1[f]<pr.second) continue;
        for(i=0;i<ed[f].size();i++){
            v = ed[f][i];
            wt = pr.second + ec[f][i];
           // P2(v,wt)
            if(lev[v]==wt) continue;
            if(lev[v]>wt){
                lev1[v]=lev[v];
                lev[v] = wt;
                q.push(pii(v,wt));
            }
            else if(lev1[v]>wt){
                lev1[v] = wt;
                //P2(lev1[v],"ddd")
                q.push(pii(v,wt));
            }
        }

    }
    //P2("YES:  ",lev1[2])
    return lev1[n];
}

void free(){
    for(int i=0;i<=MX;i++){
        ed[i].clear();
        ec[i].clear();
        lev[i] = lev1[i] = 1000000000;
    }
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,w,x,y,sum;
   freopen("1099.txt","r",stdin);
    scanf("%d",&ts);
    while(++cas<=ts){
        free();
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++){
            scanf("%d %d %d",&x,&y,&w);
            if(i>m) w = -1*w;
            ed[x].push_back(y);
            ed[y].push_back(x);
            ec[x].push_back(w);
            ec[y].push_back(w);
        }
        printf("Case %d: %d\n",cas,dst(1));
    }
    return 0;
}

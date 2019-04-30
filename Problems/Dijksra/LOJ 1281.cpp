#include <bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define chk(n,i) (bool)(n&(1<<i))
#define on(n,i) (n|(1<<i))
#define off(n,i) n=n&(~(1<<i))
#define eps 10e-7
#define MX 1000000000
using namespace std;

vector<int>ed[10005],ec[10005],sed[10005],sec[10005];
int lev[10005][12],n,m,k,d;

struct pii{
    int fs,se,cnt;
    pii(){}
    pii(int n,int m,int x){
        fs = n;
        se = m;
        cnt = x;
    }
};
bool operator<(pii a,pii b){
    return a.se>b.se;
}

int dst(int st){
    int i,v,f,x,wt,mn=MX;
    pii pr;
    priority_queue<pii>q;
    q.push(pii(st,0,0));
    lev[0][0] = 0;
    while(!q.empty()){
        pr = q.top();
        f = pr.fs;
        q.pop();
        if(lev[f][pr.cnt]<pr.se) continue;
        if(f == n-1) return pr.se;
        for(i=0;i<ed[f].size();i++){
            v = ed[f][i];
            wt = pr.se + ec[f][i];
            if(lev[v][pr.cnt]==-1||lev[v][pr.cnt]>wt){
                lev[v][pr.cnt] = wt;
                q.push(pii(v,wt,pr.cnt));
            }
        }
       // P2(pr.cnt,f)
        if(pr.cnt<d){
           // P(f)
            for(i=0;i<sed[f].size();i++){
                v = sed[f][i];
                wt = pr.se + sec[f][i];
                if(lev[v][pr.cnt]==-1||lev[v][pr.cnt]>wt){
                    lev[v][pr.cnt+1] = wt;
                   /// P(v)
                    q.push(pii(v,wt,pr.cnt+1));

                }
            }
        }
    }
    return MX;
}

void free(){
    int j;
    for(int i=0;i<=10003;i++){
        for(j=0;j<12;j++)
            lev[i][j] = -1;
        ed[i].clear();
        ec[i].clear();
        sed[i].clear();
        sec[i].clear();
    }
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,w,x,y,sum,ans;
    freopen("1281.txt","r",stdin);
    scanf("%d",&ts);
    while(++cas<=ts){
        free();
        scanf("%d %d %d %d",&n,&m,&k,&d);
        for(i=1;i<=m;i++){
            scanf("%d %d %d",&x,&y,&w);
            ed[x].push_back(y);
            ec[x].push_back(w);
        }
        for(i=1;i<=k;i++){
            scanf("%d %d %d",&x,&y,&w);
            sed[x].push_back(y);
            sec[x].push_back(w);
        }
        ans = dst(0);
        if(ans!=MX) printf("Case %d: %d\n",cas,ans);
        else printf("Case %d: Impossible\n",cas);
    }
    return 0;
}

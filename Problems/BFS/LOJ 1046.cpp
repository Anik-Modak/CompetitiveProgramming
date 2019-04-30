#include <bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define chk(n,i) (bool)(n&(1<<i))
#define on(n,i) (n|(1<<i))
#define off(n,i) n=n&(~(1<<i))
#define eps 10e-7
#define MX 1000000000
using namespace std;

struct node{
    int n,l;
}st[12][12];

char str[12][12];
int vs[12][12],lev[12][12],n,m;
int dx[] = {1,1,2,2,-1,-1,-2,-2};
int dy[] = {2,-2,1,-1,2,-2,1,-1};

void bfs(int fx,int fy)
{
    int i,v,x,y,md;
    MS(vs,0)
    MS(lev,0);
    queue <pii> q;
    pii pr;
    md = str[fx][fy]-'0';
    vs[fx][fy]=1;
    lev[fx][fy]=0;
    q.push(pii(fx,fy));
    st[fx][fy].n++;
    while(!q.empty()){
        pr=q.front();
        fx=pr.first;
        fy=pr.second;
        q.pop();
        for(i=0;i<8;i++){
            x=fx+dx[i];
            y=fy+dy[i];
            if(x<0||x>=n||y<0||y>=m) continue;
            if(!vs[x][y]){
                q.push(pii(x,y));
                vs[x][y]=1;
                lev[x][y]=lev[fx][fy]+1;
                st[x][y].n++;
                st[x][y].l += lev[fx][fy]/md + 1;
            }
        }
    }
}

int main()
{
    int i,j,a,b,ts,cn=0,cas=0,x,y,sum,mn,mr;
    freopen("1046.txt","r",stdin);
    scanf("%d",&ts);
    while(++cas<=ts){
        MS(st,0);
        cn=mr=0;
        mn=MX;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
            scanf("%s",str[i]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(str[i][j]!='.'){
                    bfs(i,j);
                    cn++;
                }
            }
        }
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(st[i][j].n==cn){
                    mn=min(mn,st[i][j].l);
                }
            }
        }
        if(mn==MX) mn = -1;
        printf("Case %d: %d\n",cas,mn);
    }
    return 0;
}

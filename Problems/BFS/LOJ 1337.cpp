#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

void fill();

bool vs[505][505];
char str[505][505];
int m,n,mu,cnt[505][505];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

int bfs(int fx,int fy){
    pii pi;
    int i,j,mx=0,x,y;
    queue<pii>q;
    if(str[fx][fy]=='#') return 0;
    fill();
    q.push(pii(fx,fy));
    vs[fx][fy] = 1;
    if(str[fx][fy] == 'C'||str[fx][fy] == 'c') mx++;
    if(mu != -1 && str[fx][fy] != '#') cnt[fx][fy] = mu;
    while(!q.empty()){
        pi = q.front();
        fx = pi.first;
        fy = pi.second;
        q.pop();
        for(i=0;i<4;i++){
            x = fx + dx[i];
            y = fy + dy[i];
            //if(str[x][y]=='#') cnt[x][y] = 0;
            if(!vs[x][y]&&str[x][y]!='#'&&x>0&&y>0&&x<=m&&y<=n){
                q.push(pii(x,y));
                vs[x][y] = 1;
                if(str[x][y] == 'C'||str[fx][fy] == 'c') mx++;
                if(mu != -1) cnt[x][y] = mu;
                //cout<<mx<<" "<<x<<" "<<y<<endl;
                //cout<<"mu:: "<<mu<<" "<<cnt[x][y]<<" "<<x<<y<<endl;
            }
        }
    }
    return mx;
}

int main()
{
    int a,b,c,i,j,ts,cas=0,q,x,y;
    freopen("1337.txt","r",stdin);
    cin>>ts;
    while(++cas<=ts){
        scanf("%d %d %d",&m,&n,&q);
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                scanf(" %c",&str[i][j]);
                cnt[i][j] = -1;
                vs[i][j] = 0;
            }
        }
        printf("Case %d:\n",cas);
        for(i=1;i<=q;i++){
            scanf("%d %d",&x,&y);
            mu=0;
            if(cnt[x][y] == -1){
                mu = bfs(x,y);
                //cout<<"..."<<mu<<endl;
                a = bfs(x,y);
            }
            else a = cnt[x][y];
            printf("%d\n",a);
            //cout<<cnt[2][1]<<endl;
        }
    }
    return 0;
}

void fill(){
    for(int i=0;i<=m+1;i++){
        for(int j=1;j<=n+1;j++){
            vs[i][j] = 0;
        }
    }

}

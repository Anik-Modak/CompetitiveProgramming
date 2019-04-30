//Anik_Modak
#include<bits/stdc++.h>
#define siz 250505
#define mem(x,y) memset(x,y,sizeof(x));
#define clr(x) for(int i = 0; i < siz; i++) x[i].clear();
#define pb(x) push_back(x)
using namespace std;

vector <int> adj[siz];
bool vis[siz];
string s[505];

int bfs(int source,int m)
{
    queue <int> vc;
    int a,b,c;

    vis[source]=1;
    vc.push(source);
    int ans=0;

    while(!vc.empty())
    {
        a=vc.front();

        int x,y;
        x=a/m;
        y=a%m;
        if(s[x][y]=='C') ans++;
       // cout<<a<<endl;

        vc.pop();
        for(int i=0; i<adj[a].size(); i++)
        {
            b=adj[a][i];
            if(vis[b]==0){
                vis[b]=1;
                vc.push(b);
            }
        }
    }
    return ans;
}

int main()
{
    int t,ca;
   // freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1;ca<=t;ca++)
    {
        int n,m,q;
        cin>>n>>m>>q;
        for(int i=0; i<n; i++) cin>>s[i];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int p=j+m*i;
                if(j<m-1&&(s[i][j]=='.'||s[i][j]=='C')&&(s[i][j+1]=='.'||s[i][j+1]=='C')){
                        adj[p].push_back(p+1);
                        adj[p+1].push_back(p);
                }
                if(i<n-1&&(s[i][j]=='.'||s[i][j]=='C')&&(s[i+1][j]=='.'||s[i+1][j]=='C')){
                        adj[p].push_back(p+m);
                        adj[p+m].push_back(p);
                }
            }
        }
        printf("Case %d:\n",ca);
        for(int i=0; i<q; i++)
        {
            int x,y,pos,ans;
            cin>>x>>y;
            mem(vis,0);

            pos=(y-1)+m*(x-1);
            ans=bfs(pos,m);

            cout<<ans<<endl;
        }
        clr(adj);
    }
}

//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {1, -1 ,0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

bool visited[MAX][MAX];
int lev[MAX][MAX];
char grid[MAX][MAX];

int ter, row, column;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column) return true;
    return false;
}

int bfs(int x,int y)
{
	lev[x][y]=0;
	queue<pii>q;
	q.push(pii(x,y));

	while(!q.empty())
	{
		pii top=q.front();
        q.pop();

        x=top.first;
        y=top.second;

		for(int i=0; i<8; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]!='#')
            {
				lev[vx][vy]=lev[x][y]+1;
				visited[vx][vy]=1;
				q.push(pii(vx,vy));
                if(grid[vx][vy]=='T')
                {
                    if(lev[vx][vy]<=ter) return 1;
                    return 0;
                }
			}

		}
	}
	return 0;
}





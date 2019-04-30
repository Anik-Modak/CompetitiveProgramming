//Anik_Modak
#include<bits/stdc++.h>
#define MAX 10
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int row, column;
int dx[] = {0,1,-1,0};
int dy[] = {1,0,0,-1};

bool vis[MAX][MAX];
int lev[MAX][MAX];
char grid[MAX][MAX];

bool valid(int x, int y)
{
    if(x>=0 && x<4 && y>=0 && y<4) return true;
    return false;
}

pii bfs(int x, int y)
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

            if(valid(vx, vy) && grid[vx][vy]!='X')
            {
				lev[vx][vy]=lev[x][y]+1;
				q.push(pii(vx,vy));
                if(grid[vx][vy]=='*') return {vx,vy};

			}
		}
	}
	return {-1,-1};
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>row>>column;
        getchar();

        for(int i=0; i<row; i++) gets(grid[i]);

        int sx,sy;
        for(int i=0; i<row; i++)
            for(int j=0; j<column; j++)
                if(grid[i][j]=='o') sx=i, sy=j;

        bfs(sx,sy);
    }
}

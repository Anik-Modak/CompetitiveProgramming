//Anik_Modak
#include<bits/stdc++.h>
#define MAX 32
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {0,0,0,0,1,-1};
int dy[] = {0,0,1,-1,0,0};
int dz[] = {1,-1,0,0,0,0};

bool visited[MAX][MAX][MAX];
char grid[MAX][MAX][MAX];
int row, column, zxix;

struct dir
{
    int x, y, z;
    int ans;
};

bool valid(int x, int y, int z )
{
    if(x>=0 && x<row && y>=0 && y<column && z>=0 && z<zxix) return true;
    return false;
}


int bfs(int sx,int sy, int sz)
{
	queue<dir>q;

	dir node;
	node.x = sx;
	node.y = sy;
	node.z = sz;
	node.ans=0;
	q.push(node);
	visited[node.x][node.y][node.z]=1;

	while(!q.empty())
	{
		dir top=q.front();
        q.pop();

		for(int i=0; i<6; i++)
        {
            node = top;
            node.x += dx[i];
            node.y += dy[i];
            node.z += dz[i];
            node.ans++;

            if(valid(node.x, node.y, node.z) && visited[node.x][node.y][node.z]==0 && grid[node.x][node.y][node.z]!='#')
            {
                //cout<<node.x<<" "<<node.y<<" "<<node.z<<endl;
				visited[node.x][node.y][node.z]=1;
				q.push(node);

                if(grid[node.x][node.y][node.z]=='E') return node.ans;
			}
		}
	}
	return -1;
}

int main()
{
    while(cin>>row>>column>>zxix)
    {
        if(row==0 && column==0 && zxix == 0) break;

        int sx, sy, sz;
        for(int i=0; i<row; i++)
        {
            cin.ignore();
            for(int j=0; j<column; j++)
            {
                for(int k=0; k<zxix; k++)
                {
                    cin>>grid[i][j][k];
                    if(grid[i][j][k]=='S') sx=i, sy=j, sz=k;
                }
            }
        }

        mem(visited,0);
        int steps = bfs(sx,sy,sz);

        if(steps != -1) printf("Escaped in %d minute(s).\n",steps);
        else printf("Trapped!\n");
    }
    return 0;
}

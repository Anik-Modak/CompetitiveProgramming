#include<iostream>
#include<stdio.h>
#include<string.h>
#define MX 27

int dx[] = {1, -1 ,0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

int N;
char grid[MX][MX];
bool vis[MX][MX];

bool valid(int x, int y)
{
    if(x>=0 && x<N && y>=0 && y<N)
        return true;
    return false;
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    for(int i=0; i<8; i++)
    {
        int ix = x + dx[i];
        int iy = y + dy[i];
        if(valid(ix,iy) && !vis[ix][iy] && grid[ix][iy] == '1')
            dfs(ix, iy);
    }
}

int main()
{
    //freopen("input.txt","r",stdin);
    int cas = 0;
    while(scanf("%d",&N )==1)
    {
        for(int i=0; i<N; i++)
            scanf("%s",grid[i]);

        int ans = 0;
        memset(vis, 0, sizeof(vis));

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                if(!vis[i][j] && grid[i][j] == '1')
                {
                    //printf("%d %d\n",i, j);
                    dfs(i, j);
                    ans++;
                }
            }
        }
        printf("Image number %d contains %d war eagles.\n", ++cas, ans);
    }
    return 0;
}

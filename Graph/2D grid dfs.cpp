#include <bits/stdc++.h>
using namespace std;

#define MAX 550

int dx[] = {1, -1 ,0, 0};
int dy[] = {0, 0, 1, -1};

bool visited[MAX][MAX];
int grid[MAX][MAX];

int row, column;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

void dfs(int ux, int uy)
{
    visited[ux][uy] = true;

    for(int i=0; i<4; i++)
    {     ///if it can go 4 directions
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]!=-1)
            dfs(vx, vy);
    }

    return;
}

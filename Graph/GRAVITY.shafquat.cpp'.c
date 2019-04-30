//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

#define MAX 550

int dx[] = {1, -1 ,0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

bool visited[MAX][MAX];
char grid[MAX][MAX];

int ter, row, column, cnt, ans;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column) return true;
    return false;
}

void dfs(int ux, int uy)
{
    visited[ux][uy] = true;

    for(int i=0; i<8; i++)
    {
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && !visited[vx][vy] && grid[vx][vy]!='#')
        {
             cnt++;
             //cout<<grid[vx][vy]<<endl;
             if(cnt<=ter && grid[vx][vy]=='T') ans=1;
             dfs(vx, vy);
        }
    }
    return;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>ter>>row>>column;
        getchar();

        for(int i=0; i<row; i++) gets(grid[i]);

        int sx,sy;
        for(int i=0; i<row; i++)
            for(int j=0; j<column; j++)
                if(grid[i][j]=='S') sx=i, sy=j;

        cnt=0, ans=0;
        dfs(sx,sy);

        if(ans==1) cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;
    }
}

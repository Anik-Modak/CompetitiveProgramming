//Anik_Modak
#include<bits/stdc++.h>
#define MAX 50
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int dx[] = {1, -1 ,0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

char grid[MAX][MAX];
int row, column, id=0;

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column) return true;
    return false;
}

int dp[MAX][MAX];
int dfs(int ux, int uy)
{
    if(dp[ux][uy] != -1)
        return dp[ux][uy];

    int mx = 0;
    for(int i=0; i<8; i++)
    {
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && grid[vx][vy]==grid[ux][uy]+1)
            mx = max(mx, 1 + dfs(vx, vy));
        else
            return 0;
        cout<<mx<<endl;
    }
    return mx;
}

int main()
{
    int cas = 0;
    while(cin>>row>>column && row|column)
    {
        for(int i=0; i<row; i++)
            cin>>grid[i];

        int ans = 0;
        mem(dp, -1);

        for(int i=0; i<row; i++)
            for(int j=0; j<column; j++)
                ans = max(ans, dfs(i,j));

        cout<<ans<<endl;
    }
}


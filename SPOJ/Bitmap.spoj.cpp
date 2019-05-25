//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int, int>
#define MAX 190
using namespace std;

int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

int dist[MAX][MAX];
char a[MAX][MAX];
int row, column;

bool valid(int x, int y)
{
    if(x>=1 && x<=row && y>=1 && y<=column)
        return true;
    return false;
}

void bfs(int sx, int sy)
{
    queue<pii> q;
    q.push(pii(sx, sy));

    while(!q.empty())
    {
        pii top=q.front();
        q.pop();

        int x =top.first;
        int y =top.second;

        for(int i=0; i<4; i++)
        {
            int vx = x + dx[i];
            int vy = y + dy[i];

            if(valid(vx, vy) && dist[vx][vy] > 1 + dist[x][y] && a[vx][vy] == '0')
            {
                dist[vx][vy] = 1 + dist[x][y];
                q.push(pii(vx,vy));
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        cin>>row>>column;
        for(int i=1; i<=row; i++)
            for(int j=1; j<=column; j++)
                cin>>a[i][j], dist[i][j] = INT_MAX;

        for(int i=1; i<=row; i++)
        {
            for(int j=1; j<=column; j++)
            {
                if(a[i][j]=='1')
                {
                    dist[i][j] = 0;
                    bfs(i,j);
                }
            }
        }

        for(int i=1; i<=row; i++)
        {
            for(int j=1; j<=column; j++)
            {
                cout<<dist[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}

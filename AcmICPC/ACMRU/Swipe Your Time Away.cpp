#include <bits/stdc++.h>
using namespace std;

int grid[1007][1007];
int N, M, cnt = 0;

void floodFillx1(int x, int y)
{
    cnt++;
    if(x>0 && grid[x][y]==grid[x-1][y])
        floodFillx1(x-1, y);
}

void floodFillx2(int x, int y)
{
    cnt++;
    if(x<N-1 && grid[x][y]==grid[x+1][y])
        floodFillx2(x+1, y);
}

void floodFilly1(int x, int y)
{
    cnt++;
    if(y>0 && grid[x][y]==grid[x][y-1])
        floodFilly1(x, y-1);
}

void floodFilly2(int x, int y)
{
    cnt++;
    if(y<M-1 && grid[x][y]==grid[x][y+1])
        floodFilly2(x, y+1);
}

int main()
{
    int t, cas = 0;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &N, &M);
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                scanf("%d", &grid[i][j]);

        int ans = 0, sum;
        for(int i = 1; i <N-1; i++)
        {
            for(int j = 1; j < M-1; j++)
            {
                sum = 0;
                cnt = -1;
                floodFillx1(i,j);
                sum += cnt;

                if(cnt>0)
                {
                    cnt = -1;
                    floodFillx2(i,j);
                    sum += cnt;
                }
                if(cnt>0)
                {
                    cnt = -1;
                    floodFilly1(i,j);
                    sum += cnt;
                }
                if(cnt>0)
                {
                    cnt = -1;
                    floodFilly2(i,j);
                    sum += cnt;
                }

                if(cnt < 1)
                    continue;
                else
                    ans = max(ans, sum+1);
            }
        }
        printf("Case %d: %d\n",++cas,ans);
    }
    return 0;
}


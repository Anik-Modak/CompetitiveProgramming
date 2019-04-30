//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define input() freopen("input.txt","r",stdin);
using namespace std;

int dx[] = {-1,  0, 1, -1, 0, -1, 1, 1};
int dy[] = {-1, -1, 0, 0, 1,  1, -1, 1};

int id, ck, siz;
char grid[MAX][MAX];

bool valid(int x, int y)
{
    if(x>=0 && x<4 && y>=0 && y<4)
        return true;
    return false;
}

string str;

void dfs(int ux, int uy)
{
    ++id;
    for(int i=0; i<8; i++)
    {
        int vx = ux + dx[i];
        int vy = uy + dy[i];

        if(valid(vx, vy) && grid[vx][vy]==str[id])
        {
            //cout<<i<<endl;
            if(grid[vx][vy]==str[siz-1]&& grid[ux][uy]==str[siz-2]) ck=1;
            dfs(vx, vy);
        }
    }
}

int main()
{
    input();
    int t, ca=0;
    cin>>t;

    while(t--)
    {
        for(int i=0; i<4; i++)
            cin>>grid[i];

        int q, ans=0;
        cin>>q;

        while(q--)
        {
            ck=0;
            cin>>str;
            siz=str.size();

            for(int i=0; i<4; i++)
            {
                for(int j=0; j<4; j++)
                {
                    if(grid[i][j]==str[0])
                    {
                        id=0;
                        dfs(i,j);
                        if(ck)
                        {
                            i=4;
                            break;
                        }
                    }
                }
            }
            if(ck)
            {
                if(str.size()<=4) ans+=1;
                else if(str.size()==5) ans+=2;
                else if(str.size()==6) ans+=3;
                else if(str.size()==7) ans+=5;
                else ans+=11;
            }
        }
        printf("Score for Boggle game #%d: %d\n",++ca, ans);
    }
}

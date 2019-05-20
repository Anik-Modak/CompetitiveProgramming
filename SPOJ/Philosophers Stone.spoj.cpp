//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int row, column;
int arr[MAX][MAX], dp[MAX][MAX];

bool valid(int x, int y)
{
    if(x>=0 && x<row && y>=0 && y<column)
        return true;
    return false;
}

int dfs(int ux, int uy)
{
    if(valid(ux, uy))
    {
        if(dp[ux][uy] != -1)
            return dp[ux][uy];
        int mx = 0;
        mx = max(mx, arr[ux][uy] + dfs(ux+1, uy-1));
        mx = max(mx, arr[ux][uy] + dfs(ux+1, uy+0));
        mx = max(mx, arr[ux][uy] + dfs(ux+1, uy+1));
        return dp[ux][uy] = mx;
    }
    else
        return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        cin>>row>>column;
        for(int i=0; i<row; i++)
            for(int j=0; j<column; j++)
                cin >> arr[i][j];

        int ans = 0;
        for(int i=0; i<column; i++)
        {
            mem(dp, -1);
            ans = max(ans, dfs(0,i));
            //cout<<ans<<endl;
        }
        cout<<ans<<"\n";
    }
    return 0;
}



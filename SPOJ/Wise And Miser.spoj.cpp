//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define INF INT_MAX
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
using namespace std;

int row, column;
int arr[MAX][MAX], dp[MAX][MAX];

int dfs(int ux, int uy)
{
    if(ux==row)
        return 0;

    if(dp[ux][uy] != -1)
        return dp[ux][uy];

    int mn = INF;
    mn = arr[ux][uy] + dfs(ux+1, uy);
    if(uy > 1)
    mn = min(mn, arr[ux][uy] + dfs(ux+1, uy-1));
    if(uy < column-1)
    mn = min(mn, arr[ux][uy] + dfs(ux+1, uy+1));
    return dp[ux][uy] = mn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin>>row>>column;

    for(int i=0; i<row; i++)
        for(int j=0; j<column; j++)
            cin >> arr[i][j];

    int ans = INF;
    mem(dp, -1);

    for(int i=0; i<column; i++)
    {
        ans = min(ans, dfs(0,i));
        //cout<<ans<<endl;
    }

    cout<<ans<<"\n";
    return 0;
}



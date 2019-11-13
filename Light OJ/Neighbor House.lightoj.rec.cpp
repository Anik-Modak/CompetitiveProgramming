//Anik_Modak
#include<bits/stdc++.h>
#define INF 20000002
using namespace std;

int mat[21][4], n;
int dp[21][4];

int call(int i, int j)
{
    if(i >= n)
        return 0;

    if(dp[i][j] != -1)
        return dp[i][j];

    int ret = INF;
    for(int k = 0; k < 3; k++)
    {
        if(k != j)
            ret = min(ret, call(i + 1, k) + mat[i][j]);
    }
    //cout<<i<<j<<" "<<ret<<endl;
    return dp[i][j] = ret;
}

int main()
{
    int t, ca;
    //freopen("input.txt","r",stdin);
    scanf("%d",&t);

    for(ca=1; ca<=t; ca++)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<3; j++)
                scanf("%d",&mat[i][j]);
        }

        memset(dp, -1, sizeof(dp));
        int ans = INF;
        for(int i=0; i<3; i++)
            ans = min(ans, call(0, i));
        printf("Case %d: %d\n",ca,ans);
    }
    return 0;
}



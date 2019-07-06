//Anik_Modak
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int n, m, a[11][101];
int dp[11][101];

int solve(int i, int h)
{
    if(i==n+1)
        return 0;

    if(dp[i][h] != -1)
        return dp[i][h];

    int mx = 0;
    for(int j=1; j<=m && j<=h; j++)
        if(a[i][j] >= 5)
            mx = max(mx, solve(i+1, h-j) + a[i][j]);

    return dp[i][h] = mx;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++)
                scanf("%d",&a[i][j]);

        int cnt = 0;
        for(int i=1; i<=n ; i++)
        {
            int k = 1;
            while(a[i][k] < 5)
                k++;
            cnt += k;
        }

        if(cnt > m)
            printf("Peter, you shouldn\'t have played billiard that much.\n");
        else
        {
            memset(dp, -1, sizeof(dp));
            double ans = solve(1, m);
            printf("Maximal possible average mark - %.2f\n",ans/n);
        }
    }
    return 0;
}

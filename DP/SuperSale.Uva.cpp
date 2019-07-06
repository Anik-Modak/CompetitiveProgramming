//Anik_Modak
#include<iostream>
#include<stdio.h>
#include<string.h>
#define MX 1005

int n, p[MX], w[MX];
int dp[MX][32];

int solve(int i, int sum, int cap)
{
    if(i==n)
        return 0;

    if(dp[i][sum] != -1)
        return dp[i][sum];

    int p1, p2;
    if(sum+w[i] <= cap)
        p1 = p[i] + solve(i+1, sum+w[i], cap);
    else
        p1 = 0;

    p2 = solve(i+1, sum, cap);
    return dp[i][sum] = std::max(p1, p2);
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d%d",&p[i], &w[i]);

        int g, mw, ans = 0;
        scanf("%d", &g);

        while(g--)
        {
            scanf("%d", &mw);
            memset(dp, -1, sizeof(dp));
            ans += solve(0, 0, mw);
        }
        printf("%d\n",ans);
    }
    return 0;
}

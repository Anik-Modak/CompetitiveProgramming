//anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m, n, total=10005;
        cin>>m>>n;

        int arr[n+5], cnt=0;
        for(int i = 1; i <= n; i++) cin>>arr[i];

        int dp[total] , mx = 0;
        for(int i = 1; i <= total; i ++) dp[i] = total;

        dp[0]=0;
        for(int i = 1; i <= n; i ++)
            for(int j = 10005; j > 0; j--)
                if(j - arr[i] >= 0)
                    dp[j] = min(dp[j - arr[i]] + 1, dp[j]);

        for(cnt = m; dp[cnt] == total; cnt ++);
        cout<<cnt<<" "<<dp[cnt]<<endl;
    }
}


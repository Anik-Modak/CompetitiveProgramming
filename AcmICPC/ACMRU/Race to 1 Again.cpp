#include<bits/stdc++.h>
using namespace std;

double dp[100005];

int main()
{
    int i,cnt;
    dp[1]=0;
    for(i=2;i<100005;i++){
        double sum=0;
        cnt=0;
        for(int j=1;j*j<=i;j++)
        {
            if(i%j==0){
                cnt++;
                sum+=dp[j];
                if(j*j!=i){
                    cnt++;
                    sum+=dp[i/j];
                }
            }
        }
        sum+=cnt;
        dp[i]=sum/(cnt-1);
    }
    int t,n;
    scanf("%d",&t);
    for(int c=1;c<=t;c++){
        scanf("%d",&n);
        printf("Case %d: %.6f\n",c,dp[n]);
    }
    return 0;
}

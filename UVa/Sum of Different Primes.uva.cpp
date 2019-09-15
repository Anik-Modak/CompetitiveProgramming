//Anik_Modak
#include<bits/stdc++.h>
#define MX 1125
using namespace std;

bool a[MX];
vector<int>p;

void sive(int n)
{
    for(int i=3; i<=sqrt(n); i+=2)
    {
        if(a[i/2]==0)
        {
            for(int j=i*i; j<n; j+=i*2)
                a[j/2]=1;
        }
    }

    p.push_back(2);
    for(int i=3; i<n; i+=2)
        if(a[i/2]==0)
            p.push_back(i);
}

int t_sum, N;
long long dp[190][15][MX];

int subset(int i, int id, int sum)
{
    if(sum==0)
    {
        if(id==N)
            return 1;
        else
            return 0;
    }

    if(i==p.size() || id > N)
        return 0;
    if(dp[i][id][sum] != -1)
        return dp[i][id][sum];

    long long p1, p2;
    if(sum >= p[i])
        p1 = subset(i+1, id+1, sum-p[i]);
    else
        p1 = 0;

    p2 = subset(i+1, id, sum);
    return dp[i][id][sum] = p1 + p2;
}

int main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    sive(MX);

    while(cin>>t_sum>>N && t_sum|N)
    {
        memset(dp, -1, sizeof(dp));
        long long ans = subset(0,0, t_sum);
        cout<<ans<<"\n";
    }
    return 0;
}

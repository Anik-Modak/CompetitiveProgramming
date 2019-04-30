//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x))
using namespace std;

int n,cost[1005],weight[1005];

int func(int i,int w,int CAP)
{
    int profit1,profit2;
    if(i==n) return 0;

    if(w+weight[i]<=CAP) profit1 = cost[i] + func(i + 1,w + weight[i],CAP);
    else profit1=0;

    profit2=func(i+1,w,CAP);
    return max(profit1,profit2);
}

int main()
{
    int t;
    //freopen("input.txt","r",stdin);
    cin>>t;

    while(t--)
    {
        scanf("%d",&n);
        mem(cost,0);
        mem(weight,0);

        for(int i=0; i<n; i++) scanf("%d%d",&cost[i],&weight[i]);

        int g,cw;
        scanf("%d",&g);

        long long ans=0;
        while(g--)
        {
            scanf("%d",&cw);
            ans+=func(0,0,cw);
        }
        printf("%lld\n",ans);
    }
}

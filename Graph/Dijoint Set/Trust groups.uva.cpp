//Anik_Modak
#include<bits/stdc++.h>
#define MX 30005
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define input() freopen("input.txt","r",stdin)
#define pb(x) push_back(x)
using namespace std;

int par[MX];

void make_set(int n)
{
    for(int i = 0; i <= n; i++)
    {
        par[i]=i;
    }
}

int find_p(int n)
{
    if(par[n]==n) return n;
    return par[n]=find_p(par[n]);
}

void union_fn(int x, int y)
{
    x = find_p(x);
    y = find_p(y);
    if(x != y) par[y]=x;
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, ans=0;
        scanf("%d",&n);
        make_set(n);

        for(int i=1; i<=n; i++)
        {
            int a, b;
            scanf("%d",&a);
            while(a--)
            {
                scanf("%d",&b);
                union_fn(i,b);
                //union_fn(b,i);
            }
        }

        map<int,bool>mp;
        for(int i=1; i<=n; i++) mp[par[i]];

        printf("%d\n",mp.size());
    }
    return 0;
}




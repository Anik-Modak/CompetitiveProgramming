//Anik_Modak
#include<bits/stdc++.h>
#define MX 30005
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define pb(x) push_back(x)
#define input() freopen("input.txt","r",stdin)
using namespace std;

int par[MX], ran[MX];

void make_set(int n)
{
    for(int i = 0; i <= n; i++)
    {
        par[i]=i;
        ran[i]=1;
    }
}

int find_p(int n)
{
    if(par[n]==n) return n;
    return par[n]=find_p(par[n]);
}

void link(int x, int y)
{
    if(x>y)
        ran[x]+=ran[y], par[y]=x;
    else
        ran[y]+=ran[x], par[x]=y;
}

void union_fn(int x, int y)
{
    x = find_p(x);
    y = find_p(y);
    if(x != y) link(x,y);
}

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m, ans=0;
        scanf("%d %d",&n, &m);
        make_set(n);

        while(m--)
        {
            int a, b;
            scanf("%d %d",&a, &b);
            union_fn(a,b);
        }

        for(int i=1; i<=n; i++)
            ans=max(ans,ran[i]);

        printf("%d\n",ans);
    }
    return 0;
}



//Anik_Modak
#include<bits/stdc++.h>
#define MX 50005
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define input() freopen("input.txt","r",stdin)
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
    int n, m, cas=0;
    //input();
    while(scanf("%d %d",&n, &m) && n|m)
    {
        make_set(n);
        int a[m+5], b[m+5], i = 1;

        while(i<=m)
        {
            scanf("%d %d",&a[i], &b[i]);
            union_fn(a[i],b[i]);
            i++;
        }

        i = m;
        while(i>0)
        {
            union_fn(a[i],b[i]);
            i--;
        }

        map<int,bool>mp;
        for(int i=1; i<=n; i++) mp[par[i]];

        printf("Case %d: %d\n",++cas,mp.size());
    }
    return 0;
}




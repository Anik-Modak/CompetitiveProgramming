//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define ll long long
#define pb(x) push_back(x)
using namespace std;

vector <ll> v[MX];
int par[MX];

void make_set(int n)
{
    for(int i = 0; i <= n; i++)
        par[i] = i;
}

int find_p(int n)
{
    if(par[n]==n)
        return n;
    return par[n] = find_p(par[n]);
}

void union_fn(int x, int y)
{
    x = find_p(x);
    y = find_p(y);

    if(x != y)
    {
        par[y] = x;
        vector<ll> tmp;
        merge(v[x].begin(), v[x].end(), v[y].begin(), v[y].end(), tmp.begin());
        v[x] = tmp;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    freopen("input.txt","r",stdin);
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, m;
        scanf("%d %d",&n,&m);

        printf("Case %d :\n", ++cas);
        make_set(n+1);

        for(int i=1; i<=m; i++)
        {
            int x, a, b;
            ll t, l, r;

            scanf("%d",&x);
            if(x == 0)
            {
                scanf("%d %d",&a,&b);
                union_fn(a, b);
            }
            else if(x == 1)
            {
                scanf("%d %lld",&a,&t);
                int p = find_p(a);
                auto it = lower_bound(v[p].begin(), v[p].end(), t);
                v[p].insert(it, t);
            }
            else
            {
                scanf("%d %lld %lld",&a,&l,&r);
                int p = find_p(a);
                int lr = upper_bound (v[p].begin(), v[p].end(), l-1) - v[p].begin();
                int rr = upper_bound (v[p].begin(), v[p].end(), r) - v[p].begin();
                int ans = (rr - lr);
                printf("%d\n",ans);
            }
        }
        Clear(v);
    }
    return 0;
}


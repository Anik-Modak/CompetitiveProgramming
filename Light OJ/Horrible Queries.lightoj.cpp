#include<bits/stdc++.h>
#define MX 100005
#define ll long long
using namespace std;

struct info
{
    ll prop, sum;
} tree[MX * 3];

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node].sum = 0;
        tree[node].prop = 0;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].sum = tree[Left].sum + tree[Right].sum;
    tree[node].prop = 0;
}

void update(int node, int b, int e, int i, int j, ll x)
{
    if (i > e || j < b)
        return;
    if (b >= i && e <= j)
    {
        tree[node].sum += ((e - b + 1) * x);
        tree[node].prop += x;
        return;
    }
    int Left = node * 2;
    int Right = (node * 2) + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, j, x);
    update(Right, mid + 1, e, i, j, x);
    tree[node].sum = tree[Left].sum + tree[Right].sum + (e - b + 1) * tree[node].prop;
}

ll query(int node, int b, int e, int i, int j, ll carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    ll p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    ll p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);
    return p1 + p2;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, m;
        scanf("%d%d",&n, &m);
        init(1, 1, n);

        printf("Case %d:\n",++cas);
        while(m--)
        {
            int x, a, b;
            scanf("%d",&x);

            if(x==0)
            {
                ll v;
                scanf("%d%d%lld",&a,&b,&v);
                update(1, 1, n, a+1, b+1, v);
            }
            else
            {
                scanf("%d%d",&a,&b);
                ll ans = query(1, 1, n, a+1, b+1);
                printf("%lld\n",ans);
            }
        }
    }
    return 0;
}


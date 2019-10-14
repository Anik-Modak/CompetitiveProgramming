#include<bits/stdc++.h>
#define MX 100005
#define ll long long
using namespace std;

char s[MX];
struct info
{
    int prop, sum;
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

void update(int node, int b, int e, int i, int j, int x = 1)
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

int query(int node, int b, int e, int i, int j, int carry = 0)
{
    if (i > e || j < b)
        return 0;

    if (b >= i and e <= j)
        return tree[node].sum + carry * (e - b + 1);

    int Left = node << 1;
    int Right = (node << 1) + 1;
    int mid = (b + e) >> 1;

    int p1 = query(Left, b, mid, i, j, carry + tree[node].prop);
    int p2 = query(Right, mid + 1, e, i, j, carry + tree[node].prop);

    return p1 + p2;
}

int main()
{
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%s",s);
        int q, n = strlen(s);
        scanf("%d",&q);
        init(1, 1, n);

        printf("Case %d:\n",++cas);
        while(q--)
        {
            int a, b;
            char ch;
            scanf(" %c",&ch);

            if(ch=='I')
            {
                scanf("%d%d",&a,&b);
                update(1, 1, n, a, b);
            }
            else
            {
                scanf("%d",&a);
                int p = query(1, 1, n, a, a);
                if(p%2==1)
                {
                    if(s[a-1]=='0')
                       puts("1");
                    else
                       puts("0");
                }
                else
                    printf("%c\n",s[a-1]);
            }
        }
    }
    return 0;
}

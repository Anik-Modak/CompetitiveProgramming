//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int, int>
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

int arr[mx];
pii tree[mx * 3];

void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node].first = arr[b];
        tree[node].second = -1;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node].first = max(tree[Left].first, tree[Right].first);
    tree[node].second = min(max(tree[Left].first, tree[Right].second),max(tree[Left].second, tree[Right].first));
}

pii query(int node, int b, int e, int i, int j)
{
    pii tmp;
    tmp.first = tmp.second = 0;

    if (i > e || j < b)
        return tmp;
    if (b >= i && e <= j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    pii p1 = query(Left, b, mid, i, j);
    pii p2 = query(Right, mid+1, e, i, j);

    tmp.first = max(p1.first, p2.first);
    tmp.second = min(max(p1.first, p2.second),max(p1.second,p2.first));
    return tmp;
}

void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i)
    {
        tree[node].first = newvalue;
        tree[node].second = -1;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node].first = max(tree[Left].first, tree[Right].first);
    tree[node].second = min(max(tree[Left].first, tree[Right].second),max(tree[Left].second, tree[Right].first));
}

int main()
{
    int n, q;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);

    init(1, 1, n);
    scanf("%d",&q);

    while(q--)
    {
        char ch;
        int i, j;
        cin>>ch;

        if(ch == 'U')
        {
            scanf("%d %d",&i, &j);
            update(1, 1, n, i, j);
        }
        else
        {
            scanf("%d %d",&i, &j);
            pii ans = query(1, 1, n, i, j);
            printf("%d\n", ans.first+ans.second);
        }
    }
    return 0;
}


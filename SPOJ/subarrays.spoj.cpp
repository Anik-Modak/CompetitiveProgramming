//Anik_Modak
#include<bits/stdc++.h>
#define INF INT_MAX
#define input() freopen("input.txt","r",stdin)
#define mx 100005
using namespace std;

int arr[mx], tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = max(tree[Left], tree[Right]);
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];

    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;

    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);

    return max(p1, p2);
}

int main()
{
    int n, k;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
        scanf("%d",&arr[i]);

    init(1, 1, n);
    scanf("%d",&k);

    for(int i=1; i+k-1<=n; i++)
    {
        printf("%d ",query(1, 1, n, i, i+k-1));
    }

    printf("\n");
    return 0;
}


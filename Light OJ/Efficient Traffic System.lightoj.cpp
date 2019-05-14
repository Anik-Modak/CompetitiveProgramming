//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

const int MAXN = 200100;
const int MAXM = 500100;

struct Edge
{
    int to, next;
} edge[MAXM];

int head[MAXM], tot;
int Low[MAXN], Dfn[MAXN], Stack[MAXN], Belong[MAXN];
int scc;
bool Instack[MAXN];
int num[MAXN];

void addedge(int u, int v)
{
    edge[tot].to = v;
    edge[tot].next = head[u];
    head[u] = tot++;
}

void Tarjan(int u)
{
    int v;
    Low[u] = Dfn[u] = ++Index;
    Stack[top++] = u;
    Instack[u] = true;
    for (int i = head[u]; i != -1; i = edge[i].next)
    {
        v = edge[i].to;
        if (!Dfn[v])
        {
            Tarjan(v);
            if (Low[u] > Low[v])
                Low[u] = Low[v];
        }
        else if (Instack[v] && Low[u] > Dfn[v])
            Low[u] = Dfn[v];
    }
    if (Low[u] == Dfn[u])
    {
        scc++;
        do
        {
            v = Stack[--top];
            Instack[v] = false;
            Belong[v] = scc;
            num[scc]++;
        }
        while (v != u);
    }
}

int in[MAXN], out[MAXN];
int cases = 1;

void solve(int N)
{
    memset(Dfn, 0, sizeof(Dfn));
    memset(Instack, false, sizeof(Instack));
    memset(num, 0, sizeof(num));
    Index = scc = top = 0;
    for (int i = 1; i <= N; i++)
    {
        if (!Dfn[i])
            Tarjan(i);
    }
    printf("Case %d: ",cases++);

    if (scc == 1)
    {
        printf("0\n");
        return;
    }
    for (int i = 1; i <= scc; i++)
        in[i] = out[i] = 0;
    for (int u = 1; u <= N; u++)
    {
        for (int i = head[u]; i != -1; i = edge[i].next)
        {
            int v = edge[i].to;
            if (Belong[u] != Belong[v])
            {
                in[Belong[v]]++;
                out[Belong[u]]++;
            }
        }
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= scc; i++)
    {
        if (in[i] == 0)
            ans1++;
        if (out[i] == 0)
            ans2++;
    }
    printf("%d\n", max(ans1, ans2));
}

void init()
{
    tot = 0;
    memset(head, -1, sizeof(head));
}

int main()
{
    int n, t, m;
    int u, v;
    scanf("%d", &t);
    while (t--)
    {
        init();
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= m; i++)
        {
            scanf("%d%d", &u, &v);
            {
                addedge(u, v);
            }
        }
        solve(n);
    }
    return 0;
}

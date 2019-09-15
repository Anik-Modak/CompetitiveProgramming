//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
#define mod 1000000007
#define ll long long
using namespace std;

int node[MX];
ll fact[MX], inv[MX];
vector<int>adj[MX];
bool vis[MX];

long long bigmod (ll a, ll p)
{
    long long res = 1, x = a;
    while (p)
    {
        if ( p & 1 )
        {
            res = ( res * x ) % mod;
        }
        x = ( x * x ) % mod;
        p = p >> 1;
    }
    return res;
}

void f_fact()
{
    fact[0] = 1;
    for(int i = 1; i < MX; i++)
    {
        fact[i] = (fact[i - 1] * i) % mod;
        inv[i] = bigmod(fact[i], mod - 2) % mod;
    }
}

int no = 0;
void dfs(int u)
{
    no++;
    vis[u] = 1;
    for(auto v: adj[u])
        if(!vis[v])
            dfs(v);
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;

    f_fact();
    memset(vis, 0, sizeof(vis));
    memset(node, 0, sizeof(node));

    for(int i=0; i<m; i++)
    {
        int a, b;
        cin>>a>>b;
        adj[a].push_back(b);
        node[b]++;
    }

    ll ans = fact[n] % mod;
    for(int i=1; i<=n; i++)
    {
        if(node[i]==0)
        {
            no = 0;
            dfs(i);
            ans = (ans * inv[no]) % mod;
        }
    }

    cout<<ans<<"\n";
    return 0;
}

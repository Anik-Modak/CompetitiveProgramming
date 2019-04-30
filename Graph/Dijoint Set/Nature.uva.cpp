//Anik_Modak
#include<bits/stdc++.h>
#define MX 5005
#define mem(x,y) memset(x,y,sizeof(x));
#define pii pair<int,int>
#define input() freopen("input.txt","r",stdin)
using namespace std;

int par[MX], ran[MX];

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void make_set(int n)
{
    for(int i = 0; i <= n; i++)
    {
        par[i]=i;
        ran[i]=1;
    }
}

int find(int n)
{
    if(par[n]==n)
        return n;
    return par[n]=find(par[n]);
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
    x = find(x);
    y = find(y);
    if(x != y)
        link(x,y);
}

int main()
{
    faster();
    int n, m;
    while(cin>>n>>m && n|m)
    {
        string s;
        map<string, int>mp;
        make_set(n);

        for(int i=1; i<=n; i++)
        {
            cin>>s;
            mp[s]=i;
        }

        while(m--)
        {
            string a, b;
            cin>>a>>b;
            union_fn(mp[a],mp[b]);
        }

        int ans=0;
        for(int i=1; i<=n; i++)
            ans=max(ans,ran[i]);

        cout<<ans<<endl;
    }
    return 0;
}


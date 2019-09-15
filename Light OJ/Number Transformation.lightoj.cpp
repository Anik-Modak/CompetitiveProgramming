//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
#define MX 1005
using namespace std;

bool a[1005]= {0};
void sive()
{
    int i,j,n=1000;
    for(i=4; i<=n; i=i+2)
        a[i] = 1;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(a[i]==0)
            for(j=i*i; j<n; j+=i)
                a[j]=1;
    }
}

vector <int> adj[MX];
int level[MX];
bool visited[MX];

int bfs(int source, int des)
{
    queue <int> vc;
    level[source]=0;
    visited[source]=1;
    vc.push(source);

    while(!vc.empty())
    {
        int a, b;
        a=vc.front();
        vc.pop();

        if(a == des)
            return level[a];

        for(int i=0; i<adj[a].size(); i++)
        {
            b = adj[a][i];
            if(a+b < MX && visited[a+b]==0)
            {
                level[a+b]=level[a]+1;
                visited[a+b]=1;
                vc.push(a+b);
            }
        }
    }
    return -1;
}

void primeFactors()
{
    for(int m=4; m<MX; m++)
    {
        int n = m;
        if(a[m] == 0)
            continue;

        map<int,bool> mp;
        while(n%2 == 0)
        {
            mp[2] = 1;
            n=n/2;
        }

        for (int i=3; i<=sqrt(n); i=i+2)
        {
            while(n%i==0)
            {
                mp[i] = 1;
                n=n/i;
            }
        }

        if(n>2)
            mp[n] = 1;

        for(auto it=mp.begin(); it!=mp.end(); it++)
            adj[m].push_back(it->first);
    }
}

int main()
{
    int t, ca;
    //freopen("input.txt","r",stdin);
    scanf("%d",&t);

    sive();
    primeFactors();

    for(ca=1; ca<=t; ca++)
    {
        int n, m;
        scanf("%d%d",&n,&m);

        if(n==m)
            printf("Case %d: 0\n",ca);
        else
        {
            mem(visited,0);
            int ans = bfs(n,m);
            printf("Case %d: %d\n",ca,ans);
        }
    }
    return 0;
}




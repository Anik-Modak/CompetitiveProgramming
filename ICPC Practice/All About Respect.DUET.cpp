//Anik_Modak
#include<bits/stdc++.h>
#define MX 101
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
using namespace std;

map<string, int> mp;
map<int, string> ms;
vector<int> adj[MX];
int level[MX];
bool vis[MX];

void sfill(int n)
{
    while(n--)
        cout<<' ';
}

void bfs(int a)
{
    vis[a] = 1;
    sfill(level[a]);
    cout<<ms[a]<<"\n";

    vector<string>s;
    for(int i=0; i<adj[a].size(); i++)
    {
        int b = adj[a][i];
        if(vis[b]==0)
        {
            vis[b] = 1;
            level[b]=level[a] + 1;
            s.push_back(ms[b]);
        }
    }

    int len = s.size();
    sort(s.begin(), s.end());
    for(int i=0; i<len; i++)
        bfs(mp[s[i]]);
}

int main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int t, cas = 0;
    cin>> t;

    while(t--)
    {
        int n, in = 0;
        cin>>n;
        cin.ignore();

        vector<string> v;
        string str[101];

        for(int i=0; i<n; i++)
        {
            string s, a;
            getline(cin, s);
            a = s;
            a.erase(remove(a.begin(), a.end(), ' '), a.end());

            if(!mp[a])
            {
                mp[a] = ++in;
                ms[in] = a;
            }

            int id = s.size() - a.size();
            str[id] = a;

            if(id == 0)
                v.push_back(a);
            else
                adj[mp[str[id-1]]].push_back(mp[a]);
        }

        mem(vis, 0);
        sort(v.begin(), v.end());

        cout<<"Case "<<++cas<<":\n";
        for(int i=0; i<v.size(); i++)
        {
            level[mp[v[i]]] = 0;
            bfs(mp[v[i]]);
        }

        Clear(adj);
        mp.clear();
        ms.clear();
    }
    return 0;
}

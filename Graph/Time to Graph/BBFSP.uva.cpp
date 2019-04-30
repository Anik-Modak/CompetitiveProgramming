//Anik_Modak
#include<bits/stdc++.h>
#define MX 305
#define mem(x,y) memset(x,y,sizeof(x));
#define Clear(x) for(int i = 0; i < MX; i++) x[i].clear();
#define set(x,y) for(int i = 0; i < MX; i++) x[i]=y;
#define pii pair<int,int>
#define pb(x) push_back(x)
using namespace std;

map<int,string>ver;
vector <int> adj[MX];
int p[MX];
bool vis[MX];

void bfs(int source, int stop)
{
    queue <int> vc;
    vis[source]=1;
    p[source]=-1;
    vc.push(source);

    while(!vc.empty())
    {
        int a, b;
        a=vc.front();
        vc.pop();

        for(auto b : adj[a])
        {
            if(vis[b]==0)
            {
                vis[b]=1;
                vc.push(b);
                p[b]=a;
            }
        }
    }

    if (!vis[stop])
    {
        cout << "connection impossible\n";
    }
    else
    {
        vector<int> path;
        for (int v = stop; v != -1; v = p[v])
            path.push_back(v);

        reverse(path.begin(), path.end());

        for(int i=0; i<path.size(); i++)
        {
            if(i==path.size()-1) cout<<path[i]<<endl;
            else cout<<path[i]<<" ";
        }
    }
    return;
}

int main()
{
    int n, cas=0;
    while(cin>>n)
    {
        Clear(adj);
        while(n--)
        {
            string word;
            cin>>word;
            for(int i=0; i<word.size(); i++)
                if(!isdigit(word[i]))
                    word[i] = ' ';

            stringstream s(word);
            s>>word;
            int a = atoi(word.c_str()), b;
            while(s>>word)
            {
                b=atoi(word.c_str());
                //cout<<a<< " "<<b<<endl;
                adj[a].pb(b);
                //adj[b].pb(a);
            }
        }

        int q;
        cin>>q;
        printf("-----\n");
        while(q--)
        {
            int  start, stop;
            cin>>start>>stop;

            mem(vis,0);
            bfs(start,stop);
        }
    }
    return 0;
}


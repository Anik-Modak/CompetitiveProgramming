//Anik_Modak
#include<bits/stdc++.h>
#define MX 10005
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

bool prime[MX]={0};
bool vis[MX];

void sive()
{
    for(int i=4; i<=MX; i=i+2) prime[i]=1;

    for(int i=3; i<=sqrt(MX); i+=2)
        if(prime[i]==0)
            for(int j=i*i; j<MX; j+=i) prime[j]=1;
}

int bfs(string source, string stop)
{
    if(source==stop) return 0;
    map<string,int> level;
    queue<string> vc;

    vc.push(source);
    level[source]=0;
    vis[atoi(source.c_str())]=true;

    while(!vc.empty())
    {
        string a=vc.front();
        vc.pop();

        for(int i=0; i<a.size(); i++)
        {
            for(char j='0'; j<='9'; j++)
            {
                if(i==0 && j=='0') continue;
                string str = a;
                str[i]=j;

                int n = atoi(str.c_str());
                if(vis[n]==false && prime[n]==0)
                {
                    vc.push(str);
                    level[str]=level[a]+1;
                    vis[n]=true;
                    if(str==stop) return level[str];
                }
            }
        }
    }
    return -1;
}

int main()
{
    int t;
    //freopen("input.txt","r",stdin);
    sive();
    cin>>t;

    while(t--)
    {
        string n, m;
        cin>>n>>m;

        mem(vis,0);
        int ans=bfs(n,m);

        if(ans!=-1) cout<<ans<<endl;
        else cout<<"Impossible"<<endl;
    }
}



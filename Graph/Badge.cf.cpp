//Anik_Modak
#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    bool vis[n+2];
    map<int,int>mp;
    for(int i=1; i<=n; i++)
    {
        cin>>a;
        mp[i]=a;
    }

    for(int i=1; i<=n; i++)
    {
        int v=mp[i];
        mem(vis,0);
        vis[i]=true;

        while(!vis[v])
        {
            vis[v]=true;
            v=mp[v];
        }
        cout<<v<<" ";
    }
    cout<<endl;
}

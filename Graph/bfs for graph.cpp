#include<bits/stdc++.h>
using namespace std;

void bfs(int s,int node,vector<int>adj[])
{
     bool visit[node+1]={0};

     queue <int> q;
     q.push(s);
     while(!q.empty())
     {
        int from = q.front();
        q.pop();
        for(int i=0; i<adj[from].size(); i++)
        {
            int to=adj[from][i];
            if(!visit[to]){
                visit[to]=1;
                q.push(to);
            }
        }
     }
}
int main()
{
    int node,con;
    //freopen("inputg.txt","r",stdin);
    cin>>node>>con;
    vector<int>v[node];

    for(int i=0; i<con; i++)
    {
        int s1,s2;
        cin>>s1>>s2;
        v[s1].push_back(s2);
        v[s1].push_back(s2);
    }
    bfs(0,node,v);
}

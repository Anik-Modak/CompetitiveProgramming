#include<bits/stdc++.h>
#define siz 100
using namespace std;

int q[siz][siz];

void print(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cout<<q[i][j]<<" ";
        cout<<endl;
    }
}
bool check(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            if(q[i][j]==0) return 0;
    }
    return 1;
}
int main()
{
    int node,edge;
    int adj[siz][siz]={0};
    cin>>node;

    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++) cin>>adj[i][j];
    }

    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++)
        {
            if(adj[i][j]) q[i][j]=1;
            else q[i][j] = adj[i][j];
        }
    }

    for(int k=1; k<=node; k++)
    {
        for(int i=1; i<=node; i++)
        {
            for(int j=1; j<=node; j++)
                q[i][j]=q[i][j]||(q[i][k]&&q[k][j]);
        }
    }
    print(node);

    if(check(node)) cout<<"Strongly Connected"<<endl;
    else cout<<"Not connected"<<endl;
}




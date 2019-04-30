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
            if(adj[i][j]==0) q[i][j]=siz;
            else q[i][j]=adj[i][j];
        }
    }

    for(int k=1; k<=node; k++)
    {
        for(int i=1; i<=node; i++)
        {
            for(int j=1; j<=node; j++)
                q[i][j]=min(q[i][j],q[i][k]+q[k][j]);
        }
    }
    print(node);
}



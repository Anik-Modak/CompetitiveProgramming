#include<bits/stdc++.h>
using namespace std;

int ans[10][10],n;

void print()
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}

void multiplication(int a[10][10])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            int sum=0;
            for(int k=1; k<=n; k++) sum+=a[i][k]*a[k][j];
            ans[i][j]=sum;
        }
    }
}
int main()
{
    int adj[10][10]={0};
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cin>>adj[i][j];
    }
    multiplication(adj);
    print();
}

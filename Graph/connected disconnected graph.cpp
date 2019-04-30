#include<bits/stdc++.h>
#define siz 100
using namespace std;

int ans[siz][siz];
int sum[siz][siz];

bool check(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            if(sum[i][j]==0) return 0;
    }
    return 1;
}
void addition(int first[siz][siz],int second[siz][siz],int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            sum[i][j]=first[i][j]+second[i][j];
    }
}
void multiplication(int first[siz][siz], int second[siz][siz],int n)
{
    int i,j,k,sum,mul[siz][siz];
    i=1;
    while(i<=n)
    {
        for (j=1; j<=n; j++)
        {
            sum=0;
            for (k=1; k<=n; k++) sum = sum + first[i][k]*second[k][j];
            mul[i][j]=sum;
        }
        i++;
    }
    printf("Multipication of A*A:\n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++) printf("%d ",mul[i][j]);
        printf("\n");
    }
    memcpy(ans, mul, sizeof(ans));
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
    memcpy(ans, adj, sizeof(ans));
    memcpy(sum, adj, sizeof(sum));

    for(int i=1; i<node; i++)
    {
        multiplication(ans,adj,node);
        addition(sum,ans,node);
    }
    if(check(node)) cout<<"This is strongly connected Graph"<<endl;
    else cout<<"This is not strongly connected Graph"<<endl;
}


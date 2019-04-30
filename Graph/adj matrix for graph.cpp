#include<bits/stdc++.h>
#define siz 100
using namespace std;

int ans[siz][siz];

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
    printf("Multipication of A&B:\n");
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
    cin>>node>>edge;

    int a,b;
    for(int i=0; i<edge; i++)
    {
        cin>>a>>b;
        adj[a][b]=1;
    }
    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++) printf("%d ",adj[i][j]);
        printf("\n");
    }
    multiplication(adj,adj,node);
    multiplication(ans,adj,node);
    multiplication(ans,adj,node);
}

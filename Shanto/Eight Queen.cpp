#include<bits/stdc++.h>
using namespace std;

int queen[100];
bool col[100]={0},dia1[200]={0},dia2[200]={0};

void nqueen(int id,int n)
{
    if(id==n+1)
    {
       // for(int i=1; i<=n; i++) printf("%d ",queen[i]);
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(col[i]||dia1[i+id]||dia2[n+i-id]) continue;

        queen[id]=i;
        col[i]=dia1[i+id]=dia2[n+i-id]=1;

        nqueen(id+1,n);
        col[i]=dia1[i+id]=dia2[n+i-id]=0;
    }
}

int main()
{
    int n;
    cin>>n;
    nqueen(1,n);
}


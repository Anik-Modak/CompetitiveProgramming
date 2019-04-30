#include<bits/stdc++.h>
using namespace std;

int num[100],n,k;

void combination(int id,int last)
{
    if(id==k+1)
    {
        for(int i=1; i<=k; i++) printf("%d ",num[i]);
        printf("\n");
        return;
    }
    for(int i=last+1; i<=n-k+id; i++)
    {
        num[id]=i;
        combination(id+1,i);
    }
}

int main()
{
    cin>>n>>k;
    combination(1,0);
}

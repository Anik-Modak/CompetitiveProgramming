#include<bits/stdc++.h>
using namespace std;

int vis[1000]={0},num[1000];

void permutation(int id, int n)
{
    if(id==n+1)
    {
        for(int i=1; i<=n; i++) cout<<num[i]<<" ";
        cout<<endl;
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(vis[i]==0)
        {
            cout<<i<<" "<<id<<endl;
            vis[i]=1;
            num[id]=i;
            permutation(id+1,n);
            vis[i]=0;
        }
    }

}

int main()
{
    permutation(1,3);
}

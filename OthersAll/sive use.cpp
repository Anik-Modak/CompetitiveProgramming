#include<bits/stdc++.h>
using namespace std;

bool a[1000005]={0};

void sive()
{
    int i,j,n=1000000;
    a[1]=1;
    for(i=4; i<=n; i=i+2) a[i]=1;
    for(i=3; i<=sqrt(n); i+=2)
    {
        if(a[i]==0)
            for(j=i*i; j<n; j+=i) a[j]=1;
    }
}
vector<int>v;
void sive1()
{
    int i,j,n=1000000;
    for(i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
    v.push_back(2);
    for(i=3; i<n; i+=2) if(a[i/2]==0) v.push_back(i);
}
int main()
{
    int n;
    cin>>n;

    sive();
    int i,ar[n+1];
    for(i=1;i<=n;i++) cin>>ar[i];

    int q,t,x,y;
    cin>>q;
    while(q--){
       scanf("%d%d%d",&t,&x,&y);
       int c=0;
       if(t==1){
            for(i=x;i<=y;i++) if(a[ar[i]]==0) c++;
            printf("%d\n",c);
       }
       else ar[x]=y;
    }
}

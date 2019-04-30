#include<bits/stdc++.h>
using namespace std;

bool a[100000005]={0};

void sive()
{
    int i,j,n=10000000;
    a[1]=1;
    for(i=4;i<=n;i=i+2) a[i]=1;
    for(i=3;i<=sqrt(n);i+=2)
    {
        for(j=i+i;j<=n;j+=i) a[j]=1;
    }
}
int main()
{
    int n;
    cin>>n;

    sive();
    int i,ar[n+1],p,c=0;
    vector<int>vc;
    ar[0]=0;

    for(i=1;i<=n;i++)
    {
        cin>>p;
        vc.push_back(p);
        if(a[p]==0) c++;
        ar[i]=c;
    }

    int q,t,x,y,ans;
    cin>>q;

    while(q--)
    {
       scanf("%d%d%d",&t,&x,&y);
       if(t==1){
            ans=ar[y]-ar[x-1];
            printf("%d\n",ans);
       }
       else{
           if(a[vc[x-1]]!=a[y])
           {
                vc[x-1]=y;
                c=ar[x-1];
                for(i=x-1;i<n;i++)
                {
                    if(a[vc[i]]==0) c++;
                    ar[i+1]=c;
                }
            }
       }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,c;
    cin>>t;
    for(c=1;c<=t;c++)
    {
        cin>>n>>m;
        int a[17],i,j,p,q,s=0;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            p=0;
            q=a[i];
            for(j=i+1;j<n;j++)
            {
                if(a[j]>0&&a[i]>0){
                    if(a[j]%q==0){
                        a[j]=0;
                        p=1;
                    }
                }
            }
            if(p==1||q>0) s=s+m/q;
        }
        if(s>m)s=m;
        printf("Case %d: %d\n",c,s);
    }
}

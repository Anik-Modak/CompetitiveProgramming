#include<bits/stdc++.h>
using namespace std;

long long SOD[1000005];

void digitsum()
{
    for( int i=1; i<=1000000; i++ )
    {
        int sum = 0;
        int x = i;
        while( x ){
            sum += x % 10;
            x /= 10;
        }
        SOD[i] = sum;
    }
}
int main()
{
    int t,ca;
    cin>>t;
    digitsum();

    int n,q;
    for(ca=1; ca<=t; ca++)
    {
        scanf("%d%d",&n,&q);
        int i,a[n+5],l,r;
        for(i=1; i<=n; i++) scanf("%d",&a[i]);
        for(i=1; i<=q; i++)
        {
            scanf("%d%d",&l,&r);
            int ans=0,id;
            for(int j=l; j<=r; j++)
            {
                if(ans<SOD[a[j]]){
                    ans=SOD[a[j]];
                    id=j;
                }
            }
            printf("%d %d\n",ans,id);
        }
    }
}


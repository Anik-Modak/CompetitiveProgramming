#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y,t;
    cin>>t;
    while(t--){
        long long d,m,ans=0;
        scanf("%lld%lld",&x,&y);
        d=y-x;
        if(d==0) printf("%lld\n",ans);
        else{
            m=sqrt(d);
            if(sqrt(d)-m==0) ans=m+(m-1);
            else{
                if(d%(m+1)==0) ans=m+d/(m+1);
                else ans=m+d/(m+1)+1;
            }
            printf("%lld\n",ans);
        }
    }
}

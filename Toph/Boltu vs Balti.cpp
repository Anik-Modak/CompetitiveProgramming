#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s1,s2,ans,t,m,n;
    while(cin>>m>>n)
    {
        if(m>n){
            t=m;
            m=n;
            n=t;
        }
        m=m-1;
        s1=m*(m+1)/2;
        s2=n*(n+1)/2;
        ans=s2-s1;
        printf("Sum of %lld to %lld is -> %lld;\n",m+1,n,ans);
    }
}

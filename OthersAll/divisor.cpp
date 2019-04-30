#include<bits/stdc++.h>
using namespace std;

int divisor(long long int n)
{
    long long int i,m,c=0;
    m=sqrt(n+1);
    for(i=1;i<=m;i++){
        if(i*i==n) c++;
        else if(n%i==0) c=c+2;
    }
    return c;
}
int main()
{
    int t,i,c;
    cin>>t;
    while(t--){
        long long l,h,a,mx=0;
        scanf("%lld%lld",&l,&h);
        for(i=l;i<=h;i++){
            c=divisor(i);
            if(mx<c){
                mx=c;
                a=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,h,a,mx);
    }
}


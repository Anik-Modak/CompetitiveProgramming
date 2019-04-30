//@Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int divisor(long long n)
{
    long long i,m,c=0;
    m=sqrt(n+1);
    for(i=1; i<=m; i++)
    {
        if(i*i==n) c++;
        else if(n%i==0) c=c+2;
    }
    return c;
}

int main()
{
    long long l,r,q;
    cin>>l>>r>>q;
    if(r<q) cout<<"infinity"<<endl;
    else cout<<divisor(q)<<endl;
}

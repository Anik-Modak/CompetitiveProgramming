#include<bits/stdc++.h>
using namespace std;

int divisor(long long n)
{
    long long c=0, m=sqrt(n+1);
    for(int i=1; i<=m; i++)
    {
        if(i*i==n)
            c++;
        else if(n%i==0)
            c=c+2;
    }
    return c;
}

int main()
{
    long long n,d;
    while(cin>>n)
    {
        d=divisor(n);
        cout<<"Total divisor: "<<d<<endl;
    }
}



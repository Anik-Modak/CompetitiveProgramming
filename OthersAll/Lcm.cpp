#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

long long lcm(int a, int b)
{
    long long temp=gcd(a,b);
    return temp ? (a/temp*b):0;
}

void gcdn(long long a[],int n)
{
    long long g = 0;
    for(int i=0; i<n; i++)
    {
        g=__gcd(a[i],g);
    }
    cout<<g<<endl;
}

int main()
{
    int n,i;
    cin>>n;

    long long r,a[n];

    for(i=0; i<n; i++) cin>>a[i];

    r=accumulate(a,a+n,1,lcm);

    gcdn(a,n);
    cout<<r<<endl;
}


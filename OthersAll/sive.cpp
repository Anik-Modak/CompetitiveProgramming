#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

bool a[100000005]={0};
int main()
{
    long long i,j,n,c=0;
    cin>>n;
    a[1]=1;
    for(i=4;i<=n;i=i+2) a[i]=1;
    for(i=3;i<=sqrt(n);i+=2)
    {
        for(j=i+i;j<=n;j+=i) a[j]=1;
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==0) c++;
    }
    //cout<<a[2147483647]<<endl;
    printf("Total: %d\n",c);
}


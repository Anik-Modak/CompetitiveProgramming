#include<bits/stdc++.h>
using namespace std;

bool Prime(long long n)
{
    int i;
    if(n<2) return false;
    else if(n==2) return true;

    long long m=sqrt(n);
    if(n%2==0) return false;

    for(i=3; i<=m; i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    long long a,p;
    int i,t;
    cin>>t;
    while(t--)
    {
        scanf("%I64d",&a);
        p=sqrt(a);
        if(a>3&&p*p==a&&Prime(p)) puts("YES");
        else puts("NO");
    }
}

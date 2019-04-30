//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

long long binary(long long n)
{
    long long i;
    if(n==0) return 0;

    string r;
    while(n!=0){r=(n%2==0 ?"0":"1")+r; n/=2;}
    istringstream (r) >> i;
    return i;
}
int main()
{
    int t,ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        long long a,b,c,d,p,q,r,s;
        scanf("%lld.%lld.%lld.%lld",&a,&b,&c,&d);
        scanf("%lld.%lld.%lld.%lld",&p,&q,&r,&s);

        if(binary(a)==p&&binary(b)==q&&binary(c)==r&&binary(d)==s) printf("Case %d: Yes\n",ca);
        else printf("Case %d: No\n",ca);
    }
    return 0;
}

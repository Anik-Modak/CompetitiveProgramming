#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    long long n,m;
    for(ca=1; ca<=t; ca++)
    {
        cin>>n>>m;
        long long e=0,o=0;
        while(n<=m){
            if(n%3==1) e++;
            else o++;
            n++;
        }
        printf("Case %d:\n",ca);
        printf("Odd = %lld\n",o);
        printf("Even = %lld\n",e);
    }
}

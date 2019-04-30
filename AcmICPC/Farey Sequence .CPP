#include<bits/stdc++.h>
using namespace std;

long long fn(int n){
    int c=n+1;
    for(int i=2; i<=n; i++)
        for(int j=i+1; j<=n; j++) if(i<j&&__gcd(i,j)==1) c++;
    return c-2;
}
int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        cout<<fn(n)<<endl;
    }
}

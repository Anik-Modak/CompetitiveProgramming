#include<bits/stdc++.h>
using namespace std;
int digit(long long n)
{
    int r,s=0;
    while(n!=0){
        r=n%10;
        n=n/10;
        s=s+r;
    }
    if(s>9) digit(s);
    else return s;
}
int main()
{
    long long s,n;
    while(cin>>n){
        if(n==0)break;
        s=digit(n);
        cout<<s<<endl;
    }
}

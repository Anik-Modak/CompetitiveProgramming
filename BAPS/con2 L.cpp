#include<bits/stdc++.h>
using namespace std;
long long a[85];
void fn()
{
    a[0]=1;
    a[1]=2;
    for(int i=2; i<=80; i++) a[i]=a[i-1]+a[i-2];
}
int main()
{
    int n;
    fn();
    while(cin>>n){
        if(n==0) break;
        cout<<a[n-1]<<endl;
    }
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,a;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        if(n%2==0) a=n/2;
        else
            a=(n/2)+1;
        printf("%d %d\n",a,n-a);
    }
}

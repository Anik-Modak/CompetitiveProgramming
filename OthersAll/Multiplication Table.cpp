#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    int i,c=0,s;
    if(x<=n) c=1;
    for(i=2;i<=n;i++){
        if(x%i==0){
            s=x/i;
            if(s<=n) c++;
        }
    }
    cout<<c<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,l,h;
    cin>>t;
    while(t--){
        cin>>l>>h;
        int i,a[h],s;
        a[0]=1;
        for(i=1;i<=h;i++){
            s=a[i-1]^i;
            cout<<s<<endl;
        }
    }
}

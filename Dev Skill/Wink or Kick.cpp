#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long a,b;
    while(t--){
        cin>>a>>b;
        if(b==0) cout<<":kick:"<<endl;
        else{
            if(a%b==0) cout<<":wink:"<<endl;
            else cout<<":kick:"<<endl;
        }
    }
}



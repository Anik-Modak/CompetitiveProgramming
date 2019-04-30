#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i;
    string a;
    cin>>t;
    while(t--){
        cin>>a>>n;
        int c=0;
        for(i=0;i<a.size();i++)
        {
            if(a[n-1]!=a[i]) c++;
        }
        cout<<c<<endl;
    }
}


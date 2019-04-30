#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n){
        string a;
        int i,j,c=0;
        for(i=0;i<n;i++){
            cin>>a;
            for(j=1;j<a.size();j++){
                if(a[j]=='3'){
                    c++; break;
                }
            }
        }
    cout<<c<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s[n+2];
    for(int i=1; i<=n; i++) cin>>s[i];

    for(int i=1;  i<n; i++){
        for(int j=1; j<=n-i; j++)
            if(s[j]>s[j+1]) swap(s[j],s[j+1]);
    }
    for(int i=1; i<=n; i++) cout<<s[i]<<endl;;
}



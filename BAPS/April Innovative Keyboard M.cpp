#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ch=1;
    cin>>n;
    string s[n+5];

    int a[n],mx=0,id=0;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        a[i]=s[i].size();
        if(mx<a[i]){
            mx=a[i];
            id=i;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<a[i]; j++)
            if(s[id][j]!=s[i][j]) ch=0;
    }
    if(ch) cout<<mx<<endl;
    else cout<<"Impossible"<<endl;
}


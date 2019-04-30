#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i,a=0,c=0,len=s.size();

    for(i=0; i<len; i++)
    {
        if(s[i]=='A') a++;
        else break;
    }
    for(; i<len; i++)
    {
        if(s[i]=='!') c++;
        else break;
    }
    if(a!=len&&c!=len&&(a+c)==len) cout<<"Panic!"<<endl;
    else cout<<"No panic"<<endl;
}

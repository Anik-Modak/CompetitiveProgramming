#include<bits/stdc++.h>
using namespace std;

int main()
{
    char a='A';
    map<char,int>mp;
    for(int i=0;i<10;i++) mp[a+i]=i+1;

    for(int i=0;i<mp.size();i++) cout<<mp[a+i]<<endl;
}

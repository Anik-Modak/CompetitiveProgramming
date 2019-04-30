#include<iostream>
#include<map>
using namespace std;

int main()
{
    string a;
    cin>>a;
    int i,c=0;
    map<char,int>mp;
    for(i=0;i<a.size();i++)
    {
        mp[a[i]]++;
        if(mp[a[i]]==1) c++;
    }
    cout<<c<<endl;
}

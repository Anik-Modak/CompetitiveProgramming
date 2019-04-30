#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int i,n;
    vector<int>v,b;
    for(i=0;i<10;i++) v.push_back(i+1);
    b=v;
    for(i=0;i<v.size();i++) cout<<v[i]<<endl;
    reverse(b.begin(),b.end());
    for(i=0;i<b.size();i++) cout<<b[i]<<endl;
}

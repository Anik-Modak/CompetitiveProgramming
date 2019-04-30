#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>v;
    set<int> ::iterator it;

    for(int i=1; i<=5; i++)
        v.insert(i+4);

    for(it=v.begin(); it!=v.end(); it++)
        cout<<*it<<endl;
}

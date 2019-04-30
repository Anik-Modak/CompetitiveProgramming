#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.find("ab");
    s.replace(n,2,"anik");
    cout<<s<<endl;
}

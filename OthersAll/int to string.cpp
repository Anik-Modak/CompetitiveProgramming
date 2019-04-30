#include<bits/stdc++.h>
using namespace std;

string fn(long long i)
{
    ostringstream ss;
    ss<<i;
    return ss.str();
}

int main()
{
    string s1,s2;
    long long n;
    cin>>n;
    s1=fn(n);
    s2=fn(n);
    cout<<s1<<" "<<s2<<endl;
}


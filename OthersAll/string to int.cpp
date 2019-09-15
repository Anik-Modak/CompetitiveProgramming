#include<bits/stdc++.h>
using namespace std;

long long fn(string str)
{
    long long n=0;
    stringstream ss(str);
    ss>>n;
    return n;
}

int main()
{
    string s;
    cin>>s;
    long long n = atoi(s.c_str());
    long long m = stoi(s);
    long long i = fn(s);
    cout<<n<<" "<<i<<endl;
}

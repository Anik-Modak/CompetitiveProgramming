#include<bits/stdc++.h>
using namespace std;

string Binary(int n)
{
    string r;
    while(n!=0)
    {
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    return r;
}
string bin(int n)
{
    string s;
    for (int i =3 ; i >= 0; i--)
        s[i]=((n >> i) & 1);
    return s;
}

int main()
{
    long long i,n;
    string b;
    while(cin>>n)
    {
        b=Binary(n);
        cout<<b<<endl;
        b=bitset<32>(n).to_string();
        cout<<b<<endl;
    }
}

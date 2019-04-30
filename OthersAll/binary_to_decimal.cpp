#include<bits/stdc++.h>
#include <string>
using namespace std;

int binary_to_decimal(int num)
{
    int res = 0;

    for(int i = 0; num > 0; ++i)
    {
        if((num % 10) == 1) res += (1 << i);
        num /= 10;
    }

    return res;
}

int main()
{
    int i,n,b;
    while(cin>>n)
    {
        b=binary_to_decimal(n);
        cout<<b<<endl;

        ostringstream ss;
        ss<<n;
        string s=ss.str();

        long long l=bitset<32>(s).to_ulong();
        cout<<l<<endl;
    }
}


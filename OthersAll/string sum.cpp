#include<bits/stdc++.h>
using namespace std;

string addition(string a, string b)
{
    string ans = "";
    int n = max(a.size(),b.size());

    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    a.resize(n,'0');
    b.resize(n,'0');

    int digit, carry = 0, sum = 0;
    for(int i=0; i<n; i++)
    {
        int ca = a[i]-'0';
        int cb = b[i]-'0';

        sum = (carry+ca+cb);
        digit = sum%10;
        carry = sum/10;
        ans += (digit+'0');
    }

    while(carry)
    {
        digit = carry%10;
        carry = carry/10;
        ans += (digit+'0');
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    string a, b;
    cin>>a>>b;

    cout<<addition(a,b)<<endl;
}

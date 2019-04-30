//Anik_Modak
#include <bits/stdc++.h>
using namespace std;

typedef int64_t ll;
typedef long long ll;

#define EL printf("\n")
#define pb push_back
#define FOR(i,l,r) for (int i=l;i<=r;i++)
#define FORD(i,r,l) for (int i=r;i>=l;i--)

const int base = 1e9;
typedef vector<int> BigInt;

void Set(BigInt &a)
{
    while (a.size() > 1 && a.back() == 0) a.pop_back();
}

void Print(BigInt a)
{
    Set(a);
    printf("%d", (a.size() == 0) ? 0 : a.back());
    FORD(i,a.size()-2,0) printf("%09d", a[i]); EL;
}

BigInt Integer(string s)
{
    BigInt ans;
    if (s[0] == '-') return ans;
    if (s.size() == 0) {ans.pb(0); return ans;}
    while (s.size()%9 != 0) s = '0'+s;

    for (int i=0;i<s.size();i+=9)
    {
        int v = 0;
        for (int j=i;j<i+9;j++) v = v*10+(s[j]-'0');
        ans.insert(ans.begin(),v);
    }
    Set(ans);
    return ans;
}
BigInt operator + (BigInt a, BigInt b)
{
    Set(a);
    Set(b);

    BigInt ans;
    int carry = 0;

    FOR(i,0,max(a.size(), b.size())-1)
    {
        if (i < a.size()) carry += a[i];
        if (i < b.size()) carry += b[i];
        ans.pb(carry%base);
        carry /= base;
    }
    if (carry) ans.pb(carry);
    Set(ans);
    return ans;
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string a,b,c,d;
        cin>>a>>b>>c>>d;

        BigInt A=Integer(a);
        BigInt B=Integer(b);
        BigInt C=Integer(c);
        BigInt D=Integer(d);
        Print(A+B+C+D);
    }
}

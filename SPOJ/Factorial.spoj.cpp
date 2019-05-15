//Anik_ModaK
#include<bits/stdc++.h>
using namespace std;

long long fn(long long n)
{
    long long i, s=0;
    for(i=5; i<=n; i*=5) s+=(n/i);
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int ca, t;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long n, ans = 0;
        cin>>n;
        cout<<fn(n)<<endl;
    }
    return 0;
}



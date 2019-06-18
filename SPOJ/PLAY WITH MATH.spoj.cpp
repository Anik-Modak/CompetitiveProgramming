//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long a, b, x, y, g;
        cin>>a>>b;

        g = __gcd(a,b);
        a /= g;
        b /= g;

        cout<<b<<" "<<a<<"\n";
    }
    return 0;
}

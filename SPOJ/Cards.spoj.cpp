//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        long long n, a, b;
        cin>>n;

        a = n*2;
        b = n-1;

        a = (a*(a+2))/4;
        b = (b*(b+1))/2;

        long long ans = (a+b) % 1000007;
        cout<<ans<<"\n";
    }
    return 0;
}

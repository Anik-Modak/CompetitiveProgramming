//Anik_Modak
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll a, b, x;
    scanf("%lld %lld %lld", &a, &b, &x);

    ll cnt1 = a/x;
    ll cnt2 = b/x;

    if(a%x==0) cout << cnt2-cnt1 + 1<<endl;
    else cout << cnt2 - cnt1 <<endl;

    return 0;
}

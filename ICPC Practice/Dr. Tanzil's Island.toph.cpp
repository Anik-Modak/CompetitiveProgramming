#include<bits/stdc++.h>
#define pi acos(-1)
#define ll long long
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        double ans = n * pi;
        printf("%.5f\n",ans);
    }
    return 0;
}

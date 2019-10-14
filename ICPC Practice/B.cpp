#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double p, a, b, c, d;
    cin>>p>>a>>b>>c>>d>>n;

    double mx, mn, k, diff;
    mx = diff = 0;
    for(int i=1; i<=n; i++)
    {
        k = p * (sin(a*i+b) + cos(c*i+d)+2);

        if(mx <= k)
        {
            mx = k;
            mn = k;
        }
        else
            mn = min(mn, k);

        diff = max(diff, mx-mn);
    }

    printf("%.6f\n",diff);
    return 0;
}

//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        double d, ans;
        scanf("%lf",&d);

        ans = ((2.0*d) * (2.0*d)) + 0.25;
        printf("Case %d: %.2f\n", ++cas, ans);
    }
    return 0;
}

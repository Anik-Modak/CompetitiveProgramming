//Anik_Modak
#include<bits/stdc++.h>
#define PI 3.14159
using namespace std;

int main()
{
    double L;
    while(scanf("%lf",&L)==1)
    {
        if(L==0)
            break;
        double r, ans;
        r = L/PI;
        ans = (PI*r*r)/2.0;
        printf("%.2f\n",ans);
    }
    return 0;
}

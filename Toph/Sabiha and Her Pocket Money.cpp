//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);

    long long x, y;
    while(n--)
    {
        scanf("%lld %lld",&x,&y);
        if(x==y)
            printf("0\n");
        else
        {
            long long dif = abs(x-y), ans;
            ans = __builtin_popcountll(dif);
            printf("%lld\n",ans);
        }
    }
    return 0;
}

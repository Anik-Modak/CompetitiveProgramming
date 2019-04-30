#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int q;
    while(scanf("%d",&n)==1)
    {
        long long k, number[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%lld",&number[i]);
        }

        sort(number, number+n);
        scanf("%d",&q);

        for(int i = 1; i <= q; i++)
        {
            scanf("%lld",&k);
            long long g=0;

            for(int j=0; j<n; j++)
            {
                if(number[j]%k==0)
                {
                    g = __gcd(g,number[j]);
                }
            }
            if(g==k)
                printf("Y\n");
            else
                printf("N\n");
        }
    }
    return 0;
}

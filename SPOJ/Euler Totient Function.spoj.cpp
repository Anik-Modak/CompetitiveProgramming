//Anik_Modak
#include<bits/stdc++.h>
#define MAX 1000005
using namespace std;

int phi[MAX];
void euler_phi()
{
    phi[1] = 1;
    for(int i=2; i<MAX; i++)
    {
        if(!phi[i])
        {
            phi[i] = i-1;
            for(int j=(i<<1); j<MAX; j+=i)
            {
                if(!phi[j])
                    phi[j] = j;
                phi[j] = phi[j]/i*(i-1);
            }
        }
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    euler_phi();

    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",phi[n]);
    }
    return 0;
}

#include<bits/stdc++.h>
#define MX 105
using namespace std;

int solve(int i, int ck)
{
    if(i==n)
        return 0;

    int s1, s2;
    s1 = a[i] + solve(i+1, ck);
    s2 = a[i] + solve(i+1));

}

int main()
{
    int n, a;
    while(cin>>n && n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(i==0)
                s[i] = a;
            else
                s[i] = s[i-1] + a;
            dp[i][i] = a;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                for(int k=0; )
            }
        }
    }
}

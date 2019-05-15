//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);

    int n;
    while(cin>>n)
    {
        if(n==-1)
            break;

        int a[n], sum = 0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum += a[i];
        }

        if(sum%n==0)
        {
            int m = sum/n, ans = 0;
            for(int i=0; i<n; i++)
            {
                if(a[i]<m)
                    ans += (m-a[i]);
            }
            cout<<ans<<"\n";
        }
        else
            cout<<"-1\n";
    }
    return 0;
}

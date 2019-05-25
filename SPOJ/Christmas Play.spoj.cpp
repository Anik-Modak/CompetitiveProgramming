//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int, int>
#define MAX 190
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        long long a[n+2], ans = LONG_MAX;
        for(int i=0; i<n; i++)
            cin>>a[i];

        sort(a, a+n);
        for(int i=0; i<n; i++)
            if(i >= k-1) ans = min(ans, abs(a[i]-a[i-(k-1)]));
        cout<<ans<<"\n";
    }
    return 0;
}


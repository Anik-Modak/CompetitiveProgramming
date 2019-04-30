//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long n;
        cin>>n;

        long long a[n], x, y;
        for(int i=1; i<=n; i++) cin>>a[i];

        x = (a[n]-a[2])+2-n;
        y = (a[n-1]-a[1])+2-n;

        cout<<max(x,y)<<endl;
    }
    return 0;
}

//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca=0;
    cin>>t;


    while(t--)
    {
        int n;
        cin>>n;

        int a[n],d,mx=-10000000;
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=1; i<n; i++)
        {
            d=a[0]-a[i];
            mx=max(mx,d);
        }
        printf("Case %d: %d\n",++ca,mx);
    }
}


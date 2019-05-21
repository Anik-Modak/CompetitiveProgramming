//Anik_Modak
#include<bits/stdc++.h>
using namespace std ;

int solve()
{
    int lo = 1, hi = 1000000;
    while(lo != hi)
    {
        int mid = (lo + hi+ 1)/2;
        cout<<mid<<"\n";

        string s;
        cin>>s;

        if(s=="<")
            hi = mid-1;
        else
            lo = mid;
    }
    return lo;
}

int main()
{
    ios_base::sync_with_stdio(false) ;

    int ans = solve();
    cout<<"! "<<ans<<"\n";
    return 0 ;
}


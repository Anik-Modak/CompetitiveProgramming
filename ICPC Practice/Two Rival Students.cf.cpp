//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, x, a, b;
        cin>>n>>x>>a>>b;

        int s, ans;
        if(a > b)
            swap(a, b);
        s = (a-1) + (n-b);
        //cout<<s<<endl;
        if(s >= x)
            ans = (b-a) + x;
        else
            ans = (b-a) + s;
        cout<<ans<<endl;
    }
    return 0;
}


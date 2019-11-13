//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n, a;
        cin>>n;
        map<int, int> mp;

        int mx = 1000000;
        for(int i=1; i<=n; i++)
        {
            cin>>a;
            if(mp[a])
                mx = min(mx, i-mp[a]);
            mp[a] = i;
        }

        if(mx == 1000000)
            cout<<-1<<"\n";
        else
            cout<<mx+1<<"\n";
    }
    return 0;
}




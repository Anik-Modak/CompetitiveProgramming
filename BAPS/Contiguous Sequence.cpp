//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        int n,ans=0;
        cin>>n;

        long long a,b;
        cin>>a;

        for(int i=1; i<n; i++)
        {
            cin>>b;
            if(b-a==1) ans=1;
            a=b;
        }
        if(ans) printf("Case %d: Yes\n",ca);
        else printf("Case %d: No\n",ca);
    }
}


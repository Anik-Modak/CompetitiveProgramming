//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,a,ans=0;
        map<int,int>mp;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            mp[a]++;
        }
        for(int i=1; i<n; i++)
        {
            if(mp[i]==2)
            {
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    }
}

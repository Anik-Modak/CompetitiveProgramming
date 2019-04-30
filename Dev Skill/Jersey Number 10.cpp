//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        string s,ans;
        cin>>n;

        int a,mx=0;
        while(n--)
        {
            cin>>s>>a;
            if(a>=mx){
                mx=a;
                ans=s;
            }
        }
        cout<<ans<<endl;
    }
}

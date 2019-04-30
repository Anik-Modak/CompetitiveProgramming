//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ans=0;
    cin>>n;

    long long a,s=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        ans+=s*a;
        s+=a;
    }
    cout<<ans<<endl;
}


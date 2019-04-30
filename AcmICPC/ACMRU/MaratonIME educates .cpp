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
        s+=a;
    }
    ans=s/5;
    if(double(s)/5>ans) ans++;
    cout<<ans<<endl;
}



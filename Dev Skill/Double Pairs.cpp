//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;

    while(t--)
    {
        cin>>n;
        long long a[n],s,ans=0;

        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);

        int c=0;
        for(int i=0; i<n; i++)
        {
           if(2*a[i]>a[i+1]) c++;
        }
        s=n-1;
        s=s*(s+1)/2;
        ans=s-c;
        cout<<ans<<endl;
    }
}

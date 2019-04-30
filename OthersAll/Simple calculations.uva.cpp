#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t,n;
    cin>>t;
    double a,b,c,s,ans;
    while(t--)
    {
        cin>>n>>a>>b;
        s=0;
        i=0;
        while(i<n)
        {
            cin>>c;
            s=s+2*(n-i)*c;
            i++;
        }
        ans=(n*a+b-s);
        ans=ans/(n+1);
        printf("%.2lf\n",ans);
        if(t)
            puts("");
    }
}

//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        double p,x,ans;
        cin>>p;

        x=2+sqrt(2);
        x=p/x;

        ans=x*x*0.5;
        printf("%.2lf\n",ans);
    }
    return 0;
}




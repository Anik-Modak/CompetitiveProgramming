#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        double n,d,s=0,ans;
        cin>>n;
        ans=n;
        while(n--){
            cin>>d;
            s+=d;
        }
        ans=s/ans;
        printf("Case %d: %.3lf\n",ca,ans);
    }
}


//Anik_Modak
#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int n, ans1=0, ans2=0, sum1=0, sum2=0;
    cin>>n;

    while(n--)
    {
        int p1, p2;
        cin>>p1>>p2;

        sum1+=p1;
        sum2+=p2;

        if(sum1>sum2) ans1=max(ans1,sum1-sum2);
        else ans2=max(ans2,sum2-sum1);
    }
    if(ans1>ans2) cout<<1<<" "<<ans1<<endl;
    else cout<<2<<" "<<ans2<<endl;

}


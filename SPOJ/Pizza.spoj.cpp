//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int tmp12, tmp14, tmp34;
    tmp12 =  tmp14 = tmp34 = 0;

    while(n--)
    {
        int a, b;
        char ch;
        cin>>a>>ch>>b;

        if(a==1  && b==2)
            tmp12++;
        if(a==1 && b==4)
            tmp14++;
        if(a==3 && b==4)
            tmp34++;
    }

    int ans = 1;
    ans += tmp34;
    tmp14 -= tmp34;

    ans += (tmp12+1)/2;
    if(tmp12%2==1)
        tmp14 -=2;

    if(tmp14 > 0)
    {
        ans += tmp14/4;
        if(tmp14%2)
            ans ++;
    }

    cout<<ans<<endl;
    return 0;
}

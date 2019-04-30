#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,x,y;
    cin>>x>>y>>n;

    while(n--)
    {
        if(x<y) x++;
        else y++;
    }

    double ans=0.5*(x*y);
    printf("%.6lf\n",ans);
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;

    int a=0,b=0,c=0,d=0,ans;
    while(n--)
    {
        cin>>x>>y;
        if(x>0&&y>0) a=1;
        else if(x<0&&y>0) b=1;
        else if(x<0&&y<0) c=1;
        else if(x>0&&y<0) d=1;
        ans=a+b+c+d;
    }
    cout<<ans<<endl;
}

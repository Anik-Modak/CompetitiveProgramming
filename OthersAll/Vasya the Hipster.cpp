#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b;
    x=min(a,b);
    y=((a+b)/2)-x;
    cout<<x<<" "<<y<<endl;
}

#include<iostream>
using namespace std;
int main()
{
    int a,b,c,s;
    cin>>a>>b>>c;
    if(a+b<c) s=2*(a+b);
    else if(a+c<b) s=2*(a+c);
    else if(b+c<a) s=2*(b+c);
    else s=a+b+c;
    cout<<s<<endl;
}

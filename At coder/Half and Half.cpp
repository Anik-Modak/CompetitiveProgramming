//AnikModak
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;

    long long ans=0,mx;

    if(a+b>=2*c){
        if(x>y){
            ans=2*y*c;
            ans+=(x-y)*a;
        }
        else{
            ans=2*x*c;
            ans+=(y-x)*b;
        }
    }
    else ans=x*a+y*b;

    mx=2*max(x,y)*c;
    ans=min(mx,ans);
    cout<<ans<<endl;
}

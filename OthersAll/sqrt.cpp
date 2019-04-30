#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
    double n;
    freopen("input.txt","r",stdin);
    cin>>n;
    double m,l=1,h=n;
    while(1){
        m=(l+h)/2;
        if(m*m>n) h=m-1;
        else l=m+1;
        if(abs(m*m-n)<0.00000001) break;
    }
    cout<<m<<endl;
}

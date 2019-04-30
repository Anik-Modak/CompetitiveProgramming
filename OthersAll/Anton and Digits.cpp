#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6,m,s;
    cin>>k2>>k3>>k5>>k6;
    if(k2<k5) m=k2;
    else m=k5;
    if(m>k6) m=k6;
    s=m*256;
    if(k2-m>0){
        if(k2-m<k3) s=s+(k2-m)*32;
        else s=s+k3*32;
    }
    cout<<s<<endl;
}

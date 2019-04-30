//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x,y;
    cin>>n>>x>>y;

    long long w=(x-1)+(y-1);
    long long b=(n-x)+(n-y);

    if(w<=b) cout<<"White"<<endl;
    else cout<<"Black"<<endl;
}

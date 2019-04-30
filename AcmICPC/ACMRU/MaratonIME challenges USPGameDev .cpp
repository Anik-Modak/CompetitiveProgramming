//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    long long m=(a*a+b*b),n=(c*c+d*d);

    if(m==n) cout<<"Empate\n";
    else if(m<n) cout<<"Russo\n";
    else cout<<"Wil\n";
}


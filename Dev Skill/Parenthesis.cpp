#include<bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if(n<=1) return 1;
    else return n*fact(n-1);
}

int main()
{
    int t,ca;
    cin>>t;
    int l,k;
    for(ca=1; ca<=t; ca++)
    {
        cin>>l>>k;
        printf("Case %d: ",ca);
        if(l%2||k>l/2) cout<<0<<endl;
        else if(k==l/2) cout<<1<<endl;
        else{

        }

    }

}


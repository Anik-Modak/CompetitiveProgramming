//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,x;
    cin>>n>>q>>x;

    int a,b;
    while(q--)
    {
        cin>>a>>b;
        if(a==x) x=b;
        else if(b==x) x=a;
    }
    cout<<x<<endl;
}

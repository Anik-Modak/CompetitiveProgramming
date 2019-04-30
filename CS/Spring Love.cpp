#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int m,p=1;
    while(n--)
    {
        cin>>m;
        if(m%2==0) p=0;
    }
    cout<<p<<endl;
}


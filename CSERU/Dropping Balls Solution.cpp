#include<bits/stdc++.h>
using namespace std;

int stop;

int position(int n, int pos)
{
    int l=n*2, r=n*2+1;
    if(l<stop && r<stop)
    {
        if(pos%2==0) position(r, pos/2);
        else position(l, pos/2+1);
    }
    else return n;
}
int main()
{
    int t,d,i;
    cin>>t;

    while(t--)
    {
        cin>>d>>i;
        stop=pow(2.0,d);
        cout<<position(1,i)<<endl;
    }
    return 0;
}

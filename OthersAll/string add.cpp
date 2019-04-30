#include<bits/stdc++.h>
using namespace std;

string a="012345";
void fn()
{
    int i=6;
    while(i<10000)
    {
        ostringstream ss;
        ss<<i;
        string b=ss.str();
        a += b;
        i++;
    }
}

int main()
{
    int n;
    cin>>n;
    fn();
    cout<<a[n-1]<<endl;
}




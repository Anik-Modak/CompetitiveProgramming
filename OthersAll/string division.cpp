#include<bits/stdc++.h>
using namespace std;

string a;

int division(int n)
{
    int i,r=0;
    for(i=0;i<a.size();i++)
    {
        r=r*10+(a[i]-'0');
        r=r%n;
    }
    return r;
}
int main()
{
    int n;
    cin>>a>>n;
    if(division(n)) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

}

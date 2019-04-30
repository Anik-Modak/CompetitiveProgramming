#include<bits/stdc++.h>
using namespace std;

int primeFactors(int n)
{
    set<int>s;
    while (n%2==0){
        s.insert(2);
        n=n/2;
    }
    for (int i=3; i<=sqrt(n); i=i+2)
    {
        while(n%i==0)
        {
            s.insert(i);
            n=n/i;
        }
    }
    if(n>2)  s.insert(n);
    return s.size();
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int m=n;
        while(1){
            if(primeFactors(m)==2) break;
            else m++;
        }
        cout<<m<<endl;
    }
}

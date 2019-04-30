#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,s;
    cin>>k>>r;
    int i=1;
    while(1){
        s=k*i;
        if(s%10==0||s%10==r) break;
        i++;
    }
    cout<<i<<endl;
}

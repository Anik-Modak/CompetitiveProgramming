#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,c;
    while(cin>>n){
        if(n<5) printf("There is only 1 way to produce %lld cents change.\n",n);
        else{
            printf("There are %lld ways to produce %lld cents change.\n",c,n);
        }
    }
}

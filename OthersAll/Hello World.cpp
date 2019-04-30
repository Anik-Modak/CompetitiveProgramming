#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=1,cnt;
    while(cin>>n){
        if(n<0) break;
        cnt=0;
        for(i=1;i<n;i=i+i) cnt++;
        printf("Case %d: %d\n",c++,cnt);
    }
}

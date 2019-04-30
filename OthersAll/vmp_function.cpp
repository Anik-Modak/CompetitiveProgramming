#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int i,a[10];
    for(i=0;i<5;i++) cin>>a[i];
    sort(a,a+5,cmp);
    for(i=0;i<5;i++) cout<<a[i]<<endl;;
}

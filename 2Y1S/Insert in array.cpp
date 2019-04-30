#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    printf("Enter %d elements in assending order\n",n);
    int a[n+1],loc,p=54;
    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; a[i]<=p;  i++) loc=i;
    for(int i=n+1; i>loc; i--) a[i]=a[i-1];

    a[loc+1]=54;
    for(int i=1; i<=n+1; i++) cout<<a[i]<<endl;

    loc=5;
    for(int i=n+1; i>loc; i--) a[i]=a[i-1];

    a[loc]=99;
    for(int i=1; i<=n+1; i++) cout<<a[i]<<endl;
}

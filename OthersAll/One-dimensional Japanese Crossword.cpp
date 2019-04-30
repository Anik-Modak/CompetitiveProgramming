#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    char c[n+1];
    cin>>c;
    int i,j=1,a[n+1],cnt=0;
    for(i=0;i<n;i++)
    {
        if(c[i]=='B') cnt++;
        else if(i!=0&&(c[i-1]=='B')){
            a[j++]=cnt;
            cnt=0;
        }
    }
    if(c[n-1]=='B') a[j++]=cnt;
    cout<<j-1<<endl;
    for(i=1;i<j;i++)
    {
        if(i==j) printf("%d\n",a[i]);
        else printf("%d ",a[i]);
    }
}


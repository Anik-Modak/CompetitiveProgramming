#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+1], s=0, j;
        for(i=1; i<=n; i++)
        {
            scanf("%d",&a[i]);
            for(j=1; j<i; j++)
                if(a[i]>=a[j]) s++;
        }
        cout<<s<<endl;
    }
}

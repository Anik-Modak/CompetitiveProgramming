#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n;
    cin>>t;
    while(t--)
    {
        char a[1005];
        cin>>a;

        n=strlen(a);
        sort(a,a+n);

        char c=a[0];
        a[n]='\0';

        for(i=0; i<n; i++)
        {
            if(a[i]==c) continue;
            else if(a[i+1]==a[i]) a[i]=c;
        }
        sort(a,a+n);
        cout<<a<<endl;
    }
    return 0;
}

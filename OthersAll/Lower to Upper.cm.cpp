#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,t;
    cin>>t;
    getchar();
    for(c=1;c<=t;c++){
        int i,n;
        char a[105];
        gets(a);
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            if(a[i]>=97) a[i]=a[i]-('a'-'A');
        }
        printf("Case %d: %s\n",c,a);

    }
}

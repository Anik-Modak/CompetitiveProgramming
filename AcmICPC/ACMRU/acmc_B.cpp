#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,c,n;
    cin>>t;
    for(c=1;c<=t;c++){
       char a[100000];
       scanf(" %s",a);
       scanf("%d",&n);
       int m,i,j,x,y;
       char s;
       printf("Case %d:\n",c);

       for(i=1;i<=n;i++)
       {
            scanf(" %c",&s);
            if(s=='I'){
                scanf("%d%d",&x,&y);
                for(j=x-1;j<y;j++)
                {
                    if(a[j]=='0') a[j]='1';
                    else if(a[j]=='1') a[j]='0';
                }
            }
            else if(s=='Q'){
                scanf("%d",&x);
                printf("%c\n",a[x-1]);
            }
       }
    }
}

#include<stdio.h>
int main()
{
int a=0,b=0,c=0,n,i,m,k;
    scanf("%d",&n);
for(i=1;i<=n;i++)
{
   scanf("%d%d",&m,&k);
   if(m>k)
    a=a+1;
    else if(m<k)
        b=b+1;
    else
        c=0;
    }
    if(a>b)
       printf("Mishka\n");
    else if(b>a)
        printf("Chris\n");
    else if(a==b)
        printf("Friendship is magic!^^\n");
return 0;
}


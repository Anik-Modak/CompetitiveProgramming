#include<stdio.h>
int main()
{
int a,b,d;
while(scanf("%d%d",&a,&b)!=EOF)
if(a<b)
    printf("%d",b-a);
else
    printf("%d",a-b);
return 0;
}

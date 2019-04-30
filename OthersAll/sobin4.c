#include<stdio.h>
int main()
{
int n=1;
l:printf("%d\n",n);
n=n+1;
if(n<10) goto l;
printf("%d\n",n);
return 0;
}

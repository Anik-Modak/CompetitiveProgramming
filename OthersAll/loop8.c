#include<stdio.h>
int main()
{
int i,n,sum=1;
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=sum*i;
}
printf("mul: %d\n",sum);
return 0;
}

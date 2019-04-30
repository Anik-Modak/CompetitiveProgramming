#include<stdio.h>
int main()
{
int n,i,j,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=sum+i;
    for(j=i;j<=i;j++){}
}
printf("Sum: %d\n",sum);
return 0;
}

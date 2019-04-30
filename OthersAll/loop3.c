#include<stdio.h>
int main()
{
int n,i,sum=0;
scanf("%d",&n);
for(i=1;i<n;i=i+1){
    printf("%d*%d+",i,i*i);
    sum=sum+(i*(i*i));
    }
sum=sum+(i*(i*i));
printf("%d*%d= %d\n",n,n*n,sum);
return 0;
}

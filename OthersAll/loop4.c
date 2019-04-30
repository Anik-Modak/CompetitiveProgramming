#include<stdio.h>
int main()
{
int n,i,m,sum=0;
scanf("%d",&m);
n=m;
for(i=1;i<m;i=i+2){
    printf("%d*%d+",i,n);
    sum=sum+(i*n);
    n=n-2;
    }
sum=sum+(i*n);
printf("%d*%d= %d\n",i,n,sum);
return 0;
}

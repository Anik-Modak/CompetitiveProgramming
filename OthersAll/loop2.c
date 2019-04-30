#include<stdio.h>
int main()
{
int n,i,sum=0;
scanf("%d",&n);
for(i=1;i<n;i=i+1){
    printf("%d*%d+",i,(i+1));
    sum=sum+(i*(i+1));
    }
sum=sum+(i*(i+1));
printf("%d*%d= %d\n",n,n+1,sum);
return 0;
}

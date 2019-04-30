#include<stdio.h>
int main()
{
int n,i=1,mul;
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i==1)
        printf("%d",i);
    else{
        mul=mul*i;
        printf("*%d",i);}
}
printf("=%d\n",mul);
return 0;
}

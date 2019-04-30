#include<stdio.h>
int main(){
int a,b=1,n,i;
printf("First last and differance: ");
scanf("%d%d%d",&a,&n,&i);
printf("%d",a);
L1:a=a+i;
printf("*%d",a);
b=b*a;
if(a<n)goto L1;
printf("= %d",b);
return 0;
}

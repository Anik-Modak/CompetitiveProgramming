#include<stdio.h>
int main()
{
int i,n,s;
scanf("%d",&n);
for(i=2;i<=n/2;i++){
    s=n%i;
    if(s==0)
    break;}
if(s==0)
    printf("Not Prime Number");
else
     printf("Prime Number");
return 0;
}

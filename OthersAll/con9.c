#include<stdio.h>
#include<math.h>
int main()
{
long long n,i,r=2;
scanf("%lld",&n);
for(i=1;i<=1000;i++)
{
if(n==pow(2,i)){
    r=1;
    break;}
}
if(r==1)
    printf("%lld\n",r);
else
    printf("%lld\n",r);
return 0;
}


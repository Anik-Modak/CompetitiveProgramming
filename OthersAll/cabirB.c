#include<stdio.h>
int main()
{
long long a,i,s;
for(;;)
{
    s=1;
    scanf("%lld",&a);
    if(a<0)
        break;
    else if(a==0)
        s=0;
    else{
    for(i=1;i<=a;i++)
    {
        s=s+i;
    }
    }
    printf("%lld\n",s);
}
return 0;
}


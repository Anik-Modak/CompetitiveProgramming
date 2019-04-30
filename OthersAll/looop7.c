#include<stdio.h>
int main()
{
int i,n,s;
scanf("%d",&n);
for(i=1;i<=n;i++){
    s=s+i;
    if(s>=n)break;
}
printf("%d\n",i);
return 0;
}

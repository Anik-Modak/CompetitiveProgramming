#include<stdio.h>
int main()
{
int n,k=3,a,b,i,x;
    while(scanf("%d",&n)!=EOF)
    {
    x=n;
    n=n+1;
    l:a=n/k;
    b=n%k;
    x=x+a;
    if(a>0){
        n=a+b;
        goto l;
    }
    printf("%d\n",x);
    }
return 0;
}



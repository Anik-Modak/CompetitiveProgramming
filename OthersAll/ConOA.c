#include<stdio.h>
int main()
{
    int a,b,n,m,c=0;
    scanf("%d%d",&a,&b);
    while(a<=b)
    {
        n=a*3;
        m=b*2;
        a=n;
        b=m;
        c=c+1;
    }
    printf("%d\n",c*2);
    return 0;
}

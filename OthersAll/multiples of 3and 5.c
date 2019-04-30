#include<stdio.h>
int main()
{
    int n,i,s=0,a,b,c=0;
    scanf("%d",&n);
    for(i=1;;i++){
        a=i*3;
        if(a<n)s=s+a;
        b=i*5;
        if(b<n)s=s+b;
        if(a>n&&b>n) break;
    }
    for(i=1;i<n;i++){
        if(i%5==0&&i%3==0)
            c=c+i;
    }
    printf("SUM=%d\n",s-c);
    return 0;
}

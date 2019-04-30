#include<stdio.h>
#include<math.h>
int divisor(long long int n)
{
    long long int i,m,c=0;
    m=sqrt(n+1);
    for(i=1;i<=m;i++){
        if(i*i==n) c++;
        else if(n%i==0) c=c+2;
    }
    return c;
}
int main()
{
    int t,a,i,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&a);
        c=divisor(a);
        printf("%d\n",c);
    }
    return 0;
}

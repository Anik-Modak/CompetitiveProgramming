#include<stdio.h>
#include<math.h>
int divisor(int a,int b)
{
    long long int i,m,c=0;
    for(i=1;i<=sqrt(b);i++){
        m=i*i;
        if(m>=a&&b>=m)c++;
    }
    return c;
}
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0&&b==0) break;
        c=divisor(a,b);
        printf("%d\n",c);
    }
    return 0;
}

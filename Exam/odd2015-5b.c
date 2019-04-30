#include<stdio.h>
int summation(int x, float y)
{
    float sum;
    sum=x+y;
    return sum;
}
main()
{
    int x,sum;
    float y;
    scanf("%d",&x);
    scanf("%f",&y);
    sum=summation(x,y);
    printf("%d\n",sum);
}

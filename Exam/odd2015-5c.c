#include<stdio.h>
int main()
{
    int a,b,c,d,*x,*y;
    a=5; b=10; x=&c; y=&d; c=20; d=30;
    printf("Before calling %d %d %d %d\n",a,b,*x,*y);
    fn(&c,&d,&a,&b);
    printf("After calling %d %d %d %d\n",a,b,*x,*y);
    return 0;
}
fn(int *p,int *q,int *r,int *s)
{
    *p=100;
    *q=200;
    *r=300;
    *s=400;
}

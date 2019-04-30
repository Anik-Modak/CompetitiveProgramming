#include<stdio.h>
#include<conio.h>
int x,p,q;
int add(int x)
{
    x=50;
    p=200;
    q=300;
    return x;
}
int main()
{
    int p;
    q=200;
    x=10;
    printf("Before calling x=%d p=%d q=%d\n",x,p,q);
    x=add(x);
    printf("After calling x=%d p=%d q=%d",x,p,q);
    return 0;
}

#include<stdio.h>

int main()
{
    int a,*x;
    a=15;
    x=&a;
    printf("a=%x &a=%x; x=%x *x=%x\n",a,&a,x,*x);
    printf("&x=%x *(&x)=%x\n",&x,*(&x));
    printf("&a=%x *(&a)=%x\n",&a,*(&a));
    printf("&(*(&a))=%x *(&(*(&a)))=%x\n",&(*(&a)),*(&(*(&a))));
    printf("&(*(&x))=%x *(&(*(&x)))=%x\n",&(*(&x)),*(&(*(&x))));
    return 0;
}

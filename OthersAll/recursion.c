#include<stdio.h>

void fn(int i)
{
    if(i==0) return ;

    printf("%d ",i);
    fn(i-1);

    printf("%d ",i);
    fn(i-1);
}

int main()
{
    fn(2);
}

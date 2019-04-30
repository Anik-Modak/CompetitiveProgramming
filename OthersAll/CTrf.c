#include<stdio.h>
int sum(int n)
{
    if(n==0) return n;
    else return n+sum(n-1);
}
int main()
{
    int n,s;
    scanf("%d",&n);
    s=sum(n);
    printf("%d\n",s);
    return 0;
}

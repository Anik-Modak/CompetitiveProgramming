#include<stdio.h>
int main()
{
    int m,n,s;
    scanf("%d%d",&n,&m);
    if(n<m) s=n;
    else s=m;
    if(s%2==0)
        printf("Malvika\n");
    else
        printf("Akshat\n");
    return 0;
}

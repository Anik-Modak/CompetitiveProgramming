#include<stdio.h>
int main()
{
    int n,f1,f2,f,i;

    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("%d %d ",f1,f2);
    for(i=1;i<=n;i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        printf("%d ",f);
    }
    printf("\n");
}

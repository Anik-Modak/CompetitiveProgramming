#include<stdio.h>
int main()
{
    int i,n,k,x,c=0,s;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        if(x+k<=5)
            c=c+1;
    }
    s=c/3;
    printf("%d\n",s);
    return 0;
}

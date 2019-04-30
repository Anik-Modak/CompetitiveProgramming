#include<stdio.h>
int main()
{
    int i,c,n,x;
    scanf("%d",&n);
    c=n/5;
    x=n%5;
    for(i=1;i<=5;i++)
    {
        if(x==i){
            c=c+1;
        }
    }
    printf("%d\n",c);
    return 0;
}


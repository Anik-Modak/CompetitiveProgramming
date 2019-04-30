#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=31;i>=0;i--){
        if(n&(1<<i)) printf("1");
        else printf("0");
    }
    return 0;
}

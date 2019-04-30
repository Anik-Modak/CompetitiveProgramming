#include<stdio.h>
main()
{
    int n,s=0,i;
    scanf("%d",&n);

    for(i=1; i<=n; i=i+1){
        s=s+i;
    }
    printf("sum= %d\n",s);
}

#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,min;
    while(1){
        scanf("%d%d",&n,&m);
        if(n==-1&&m==-1) break;
        min=abs(n-m);
        if(min>50)
            min=100-min;
        printf("%d\n",min);
    }
    return 0;
}

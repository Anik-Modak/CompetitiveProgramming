#include<stdio.h>
int main()
{
int i,j,t,n,x,c=0,max;
scanf("%d",&t);
for(i=1;i<=t;i++){
    max=0;
    scanf("%d",&n);
    for(j=1;j<=n;j++){
        scanf("%d",&x);
        if(x>max)
            max=x;
    }
    c=c+1;
    printf("Case %d: %d\n",c,max);
}
return 0;
}

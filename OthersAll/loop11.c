#include<stdio.h>
int main()
{
int i,j,n;
scanf("%d",&n);
for(i=2;i<=n;i=i+i){
    for(j=i;j<=i;j=j+2){
        printf("%d",j);}
    printf("\n");
}
return 0;
}

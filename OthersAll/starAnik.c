#include<stdio.h>
int main()
{
int i,j,k,l,n,m;
scanf("%d",&n);
m=n-1;
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        printf(" ");
        }
    for(k=2*i-1;k>0;k--){
        printf("*");
        }
    m--;
    printf("\n");
}
    for(l=1;l<=3;l++){
        printf("*       *\n");
        }
return 0;
}

#include<stdio.h>
int main()
{
int i,j,k,l,n;
scanf("%d",&n);
l=n+4;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf(" ");
        }
    for(k=1;k<=l;k++){
        printf("*");
        }
    l=l-2;
    printf("\n");
}
return 0;
}

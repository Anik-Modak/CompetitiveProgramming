#include<stdio.h>
int main()
{
int i,j,k,l,m,n,p;
scanf("%d",&n);
p=n-n/2;
m=n-1;
for(i=1;i<=p;i++){
    for(j=1;j<=m;j++){
        printf(" ");
        }
    for(k=2*i-1;k>0;k--){
        printf("*");
        }
    m--;
    printf("\n");
}
m=p;
l=n-2;
for(;i<=n;i++){
    for(j=1;j<=m;j++){
        printf(" ");
        }
    for(k=l;k>0;k--){
        printf("*");
        }
    m++;
    l=l-2;
    printf("\n");
}
return 0;
}


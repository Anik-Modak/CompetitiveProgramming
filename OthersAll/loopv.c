#include<stdio.h>
int main()
{
int i,p,j,k,l,n;
scanf("%d",&n);
l=2*n-3;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        printf(" ");
        }
    for(p=1;p<=2;p++){
        printf("*");
        if(i==n)
            break;
    for(k=1;k<=l;k++){
        printf(" ");
        }
    l--;
    }
    printf("\n");
}
return 0;
}

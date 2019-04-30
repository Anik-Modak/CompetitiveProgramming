#include<stdio.h>
int main()
{
int n,i,j,k,l,p;
scanf("%d",&n);
i=1;
p=2*n-3;
while(i<=n){
    i++;
    j=1;
    while(j<=i){
        printf(" ");
        j++;
    }
        l=1;
        while(l<=2){
            l++;
            printf("*");
            if(i==n)
                break;
            k=1;
            while(k<=p){
                printf(" ");
                k++;
                }
            p=p-1;
        }
        printf("\n");
    }
return 0;
}

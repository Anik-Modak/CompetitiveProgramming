#include<stdio.h>
int main()
{
int i,j,k=1,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(i==2||i==(n-1)){
            k=2;
            if(j==1||j==n)
                k=1;
                printf("%d ",k);
        }
        else if(i>=n/2&&i<(n-1)){
            if(n%2==0){
                for(k=1;k<=n/2;k++){
                    printf("%d ",k);
                }
                for(k=n/2;k>0;k--){
                    printf("%d ",k);
                }
            break;
            }
            else{
                for(k=1;k<=(n/2+1);k++){
                    printf("%d ",k);
                }
                for(k=n/2;k>0;k--){
                    printf("%d ",k);
                }
            break;
            }

        }
        else
            printf("%d ",k);
    }
    printf("\n");
}
return 0;
}

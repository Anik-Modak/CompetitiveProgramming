#include<stdio.h>
int main()
{
    int i,j,n,a[10][10],b[10][10],c[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i][j]>b[i][j])c[i][j]=a[i][j];
            else c[i][j]=b[i][j];
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}



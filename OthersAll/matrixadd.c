#include<stdio.h>
int main()
{
    int i,j,a[6][6],b[6][6],c[6][6],r[6][6];
    printf("enter A:");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&c[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            r[i][j]=(5*a[i][j])+(6*b[i][j])-(2*c[i][j]);
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            printf("%d",&r[i][j]);
        }
        printf("\n");
    }
    return 0;
}

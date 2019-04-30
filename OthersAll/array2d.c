#include<stdio.h>
int main()
{
    int i,j,max,a[6][6];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==1&&j==1)
                max=a[i][j];
            if(a[i][j]>max)
                max=a[i][j];
        }
    }
    printf("%d\n",max);
}

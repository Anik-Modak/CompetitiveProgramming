#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<4+i;j++)
        {
            printf(" %d ",j);

        }
      printf("\n");
    }
    return 0;
}

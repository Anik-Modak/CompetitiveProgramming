#include<stdio.h>
#include<conio.h>
int i,j;
int main()
{
    i=1;
    while(i<=5)
    {
        for(j=1;j<=6;j++){
            if(i==j) printf("X");
            else printf("Y");
        }
        i++;
        printf("\n");
    }
    return 0;
}

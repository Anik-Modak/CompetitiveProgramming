#include<stdio.h>
int i,j,k;
ma()
{
    for(i=1;i<=7;i++){
        for(j=2;j<=7;j++){
        if(i==j-1)
            printf("A");
        else printf("O");
    }
    printf("\n");
    }
}
int main()
{
   int i=7,n;
   char c='a';
   float f=5.5;
   n=(i+f);
   ma();
   printf("a=%d\n",i+c);
   printf("b=%d\n",n);
   return 0;
}

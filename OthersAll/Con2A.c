#include<stdio.h>
int main()
{
    int q,j,l,r;
    for(j=1;j<1000;j++)
    {
        q=j;
        l=1;
     while(q>0){
            q=j/(10*l);
            l=l*10;
            r=q%10;
            if(q==7||r==7||j%10==7||j%7==0){
                printf("%d\n",j);
                break;
            }
     }
    }
}

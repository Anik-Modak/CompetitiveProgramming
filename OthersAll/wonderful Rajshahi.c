#include<stdio.h>
int main()
{
    int age,n;
    scanf("%d%d",&age,&n);
    if(age<18)
    {
        if(n>=100)
            printf("good\n");
        else
            printf("bad\n");
    }
    else{
        if(n>=10)
            printf("good\n");
        else
            printf("bad\n");
    }
    return 0;
}

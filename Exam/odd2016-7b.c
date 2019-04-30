#include<stdio.h>
int y(int n)
{
    if(n==0){
        printf("Terminating = %d\n",n);
        return n;
    }
    else{
        printf("In Recursive calling =%d\n",n);
        return n+y(n-5);
    }
    printf("CSE %D tIMES\n",n);
}
int main()
{
    int x;
    x=y(50);
    printf("Final Output =%d\n",x);
    getch();
}

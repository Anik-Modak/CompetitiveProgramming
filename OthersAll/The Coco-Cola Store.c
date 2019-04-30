#include<stdio.h>
int main()
{
    int n,k=3,a,b,i,x;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        else{
            x=0;
            l:a=n/k;
            b=n%k;
            x=x+a;
            if(a>0){
                n=a+b;
                if(n==2)n=n+1;
                goto l;
            }
            printf("%d\n",x);
        }
    }
return 0;
}


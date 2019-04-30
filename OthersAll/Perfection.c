#include<stdio.h>
#include<math.h>
int main()
{
int exp(int a,int n)
{
    if(n==0)
        return 1;
    int ret=exp(a*a,n/2);
    if(n%2==1)
        ret=ret*a;
    return ret;
}
int i=0,j,n,c,s;
     while(1)
     {
        scanf("%d",&n);
        if(i==0)
            printf("PERFECTION OUTPUT\n");
        s=0;
        if(n==0)
            break;
        for(j=1;j<n;j++){
            if(n%j==0){
            c=j;
            s=s+c;}
        }
    for(i=0;i<=5;i++){
        if(exp(10,i)<=n&&n<exp(10,i+1))
        {
            for(j=1;j<5-i;j++){
                printf(" ");
            }
        }
    }
    if(s>n)
        printf("%d  ABUNDANT\n",n);
    else if(n==s)
        printf("%d  PERFECT\n",n);
    else
        printf("%d  DEFICIENT\n",n);
    }
    printf("END OF OUTPUT\n");
return 0;
}


#include<stdio.h>
int main()
{
    int i,j,a,b,c,d,n,m;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    n=a+b;
    m=c+d;
    for(i=0,j=0;;)
    {
        n=b+i*a;
        m=d+j*c;
        if(n==m){
            printf("%d\n",n);
            break;
        }
        else if(n>m)
            j=j+1;
        else
            i=i+1;
        if(i>100000000||j>100000000){
            printf("-1\n");
            break;}
    }
    return 0;
}

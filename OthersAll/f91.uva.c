//Anik_Modak
#include<stdio.h>

 int f91(int n)
 {
    int c;
    for(c=1;c!=0;)
    {
        if(n>100){
            n=n-10;
            c--;
        }
        else{
            n=n+11;
            c++;
        }
    }
    return n;
}
int main()
{

    long long s,k,n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        else s= f91(n);

        printf("f91(%lld) = %lld\n",n,s);
    }
    return 0;
}

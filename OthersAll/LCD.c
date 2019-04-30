#include<stdio.h>
int main()
{
    int a,b,lcd=1,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
        if(a%i==0&&b%i==0){
            lcd=lcd*i;
            a=a/i;
            b=b/i;
        }
    }
    lcd=lcd*a*b;
    printf("LCD: %d\n",lcd);
    return 0;
}

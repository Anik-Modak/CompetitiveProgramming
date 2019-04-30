#include<stdio.h>
int main()
{
    int h,m,h1,m1,t;
    while(t--){
        scanf("%d%d",&h,&m);
        if(h>6){
            m1=60-m;
            h1=(12-h)+1;
        }
        else{
            h1=h;
            m1=m;
        }
        printf("%d:%d\n",h1,m1);
    }
    return 0;
}

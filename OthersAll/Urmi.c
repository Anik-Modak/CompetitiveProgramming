#include<stdio.h>
int exp(int a,int n)
{
    if(n==0)
        return 1;
    int ret=exp(a*a,n/2);
    if(n%2==1)
        ret=ret*a;
    return ret;
}
file(int n)
{
    FILE *fp;
    fp=(fopen("homenumber.txt","a"));
    fprintf(fp,"%d\n",n);
    fclose(fp);
}
int home(int n,int m)
{
    while(a>10){
        m=a/(10*i);
        n=a%10;
        i=i*10;
        if(m<10)
            break;
    }
    return c;
}
int main()
{
    struct homenumber{
        char name[20];
        int x;
        int m;
    }dt;
    int c,s;
    scanf("%s",dt.name);
    scanf("%d%d",&dt.x,&dt.m);
    c=home(dt.x,dt.m);
    s=dt.m+1-dt.x-c;
    printf("Total Home: %d\n",s);
    return 0;
}


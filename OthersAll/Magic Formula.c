#include<stdio.h>
int main()
{
    int a,b,c,d,x,l,i,s;
    while(1)
    {
        s=0;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&l);
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        for(i=0;i<=l;i++)
        {
            x=a*i*i+b*i+c;
            if(x%d==0)
                s=s+1;
        }
        printf("%d\n",s);
    }
    return 0;
    }

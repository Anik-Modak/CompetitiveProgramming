#include<stdio.h>
int main()
{
    int h=1,u,d,f,c;
    float v,s,x;
    while(1)
    {
        scanf("%d%d%d%d",&h,&u,&d,&f);
        if(h==0)break;
        x=u;
        v=(f*x)/100;
        c=1;
        s=0;
        while(1)
        {
            s=s+x;
            if(x>0)
                x=x-v;
            if(s>h)break;
            s=s-d;
            if(s<0)break;
            c++;
        }
        if(s<0)
            printf("failure on day %d\n",c);
        else
            printf("success on day %d\n",c);
    }
    return 0;
}

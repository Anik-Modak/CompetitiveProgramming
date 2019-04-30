#include<bits/stdc++.h>
using namespace std;

int exp(int a,int n)
{
    if(n==0)
        return 1;
    int ret=exp(a*a,n/2);
    if(n%2==1)
        ret=ret*a;
    return ret;
}
int main()
{
    int n,m,a,b,i,j,c,s,x,p,d,q,e,r,f,g,h;
    while(scanf("%d%d",&x,&m)!=EOF)
    {
        c=0;
        n=x;
        while(n<=m)
        {
            for(j=0;j<=8;j++)
            {
                if(exp(10,j)<=n&&n<exp(10,j+1))
                {
                    a=n/exp(10,j);
                    b=n%exp(10,j);
                    if(a==b){
                        c=c+1;
                        break;
                    }
                    if(n>=100&&n<1000){
                        p=n%100;
                        d=p/10;
                        h=p%10;
                        if(a==d||a==h||d==h)
                            c=c+1;
                            break;
                        }
                    if(n>=1000&&n<10000){
                        q=n%1000;
                        e=q/100;
                        r=q%100;
                        f=r/10;
                        g=r%10;
                        if(a==e||a==f||e==f||e==g||a==g||f==g)
                            c=c+1;
                            break;
                    }
                }
            }
            n++;
        }
        s=m+1-x-c;
        printf("%d\n",s);
    }
    return 0;
}



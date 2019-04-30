#include<stdio.h>
#include<string.h>
int main()
{
    char c[205];
    long long t,x,y,n,i,j,k;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&x,&y);
        getchar();
        scanf("%s",c);
        scanf("%lld",&n);
        for(j=1;j<=n;j++){
            for(k=0;k<strlen(c);k++){
                if(c[k]=='U')
                    y++;
                else if(c[k]=='D')
                    y--;
                else if(c[k]=='R')
                    x++;
                else if(c[k]=='L')
                    x--;
            }
        }
        printf("%lld %lld\n",x,y);
    }
    return 0;
}

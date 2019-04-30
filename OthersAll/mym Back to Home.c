#include<stdio.h>
int main()
{
    int n,m,b,t,r[50],s[50],i,j,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&m,&n,&b);
        c=0;
        for(j=1;j<=b;j++){
            scanf("%d %d",&r[j],&s[j]);
            if(m>=r[j]&&n>=s[j]){
                if(m>r[j]) m=r[j];
                c=1;
            }
        }
        if(c==1){
            for(j=1;j<=b;j++){
                if(m==r[j]){
                    if(n>=s[j]) n=s[j];
                }
            }
            printf("%d %d\n",m,n);
        }
        else
            printf("impossible\n");
    }
    return 0;
}

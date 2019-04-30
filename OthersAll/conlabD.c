#include<stdio.h>
#include<string.h>
int main()
{

    long long t,a,b,i,j,p,q,k,length,x;
    char c[200],c1[100],c2[100];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
         for(x=0;x<100;x++){
            c1[x]='\0';
            c2[x]='\0';
        }
        scanf("%s",c);
        scanf("%lld%lld",&a,&b);
        length=strlen(c);
        for(j=0;j<length;j++){
            c1[j]=c[j];
            p=atoi(c1);
            if(p%a!=0)
                continue;
            else break;
        }
        for(j=j+1,k=0;j<length;j++,k++){
            c2[k]=c[j];
        }
        c2[k]='\0';
        q=atoi(c2);
        if(p%a==0&&q%b==0){
            printf("%s %s\n",c1,c2);
        }
        else printf("-1\n");
    }
    return 0;
}

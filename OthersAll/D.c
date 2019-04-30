#include<stdio.h>
#include<string.h>

    int main()
{

    int t,a,b,i,j,p,q,length;
    char c[20],c1[10],c2[10];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        scanf("%s",c);
        scanf("%d%d",&a,&b);
        length=strlen(c);
        for(j=0;j<length;j++){
            c1[j]=c[j];
            p=atoi(c1);
            if(p<a||p%a!=0)
                continue;
            else break;
        }
        for(j=j+1;j<length;j++){
            c2[j]=c[j];
        }
        q=atoi(c2);
	printf("%d%d\n",p,q);
        if(p%a==0&&q%b==0){
            printf("%s",c1);
	    printf("%s",c2);
	}
        else
            printf("-1");

    }
    return 0;
}

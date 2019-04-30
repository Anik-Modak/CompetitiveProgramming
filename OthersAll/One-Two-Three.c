#include<stdio.h>
#include<string.h>
int main()
{
    char c[10];
    int i,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        getchar();
        scanf("%s",c);
        n=strlen(c);
        if(n==3){
           if((c[0]=='o'&&c[1]=='n')||(c[0]=='o'&&c[2]=='e')||(c[1]=='n'&&c[2]=='e'))
                printf("1\n");
           else
             printf("2\n");
        }
        else
            printf("3\n");
    }
    return 0;
}


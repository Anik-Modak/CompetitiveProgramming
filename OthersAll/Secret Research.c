#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000];
    int i,t,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        getchar();
        scanf("%s",s);
        n=strlen(s);
        if(n==1&&s[0]=='1'||n==1&&s[0]=='4'||(n==2&&s[0]=='7'&&s[1]=='8'))
            printf("+\n");
        else if(s[n-2]=='3'&&s[n-1]=='5')
            printf("-\n");
        else if(s[0]=='9'&&s[n-1]=='4')
            printf("*\n");
        else
            printf("?\n");
    }
    return 0;
}

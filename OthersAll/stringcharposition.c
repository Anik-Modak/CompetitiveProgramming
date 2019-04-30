#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],s[1];
    int i,n;
    gets(c);
    n=strlen(c);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(c[i]==s[00])
            printf("position: %d\n",i+1);
    }
    return 0;
}


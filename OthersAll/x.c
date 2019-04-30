#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int i,idx,a[26]={0};

    for(i=0; i<strlen(s); i++)
    {
        int idx=s[i]-'a';
        a[idx]=1;
    }

    int c=0;
    for(i=0; i<26; i++)
    {
        if(a[i]==1) c++;
    }
    printf("%d\n",c);
}

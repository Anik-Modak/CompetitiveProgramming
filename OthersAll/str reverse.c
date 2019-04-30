#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],s[1000];
    scanf("%s",str);
    strcpy(s,str);
    strrev(str);
    if(strcmp(s,str)==0) printf("Pallindrome\n");
    else printf("Not Pallindrome\n");
}

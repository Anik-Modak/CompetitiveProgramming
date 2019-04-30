#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], *p;
    gets(str);
    while(str!="\0"){
        p=strtok("\0"," ");
        printf("%s\n",p);
    }
}

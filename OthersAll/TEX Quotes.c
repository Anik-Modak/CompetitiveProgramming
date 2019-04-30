#include<stdio.h>
#include<string.h>
char c[1000];
int main()
{
    int i,n,j=0;
    char c[10000];
    while(gets(c)){
        n=strlen(c);
        for(i=0;i<n;i++){
            if(c[i]=='"'){
                if(j%2==0) printf("``");
                else printf("''");
                j++;
            }
            else printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}

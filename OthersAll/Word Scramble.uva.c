#include<stdio.h>
#include<string.h>
void * reverse(char *c1)
{
    int i,len ;
    len=strlen(c1);
    for(i=len-1; i>=0; i--){
        printf("%c",*(c1+i));
        *(c1+i)='\0';
    }
}
int main()
{
    int i,n,j;
    char c[1000],c1[100]={'\0'};
    while(gets(c)){
       n=strlen(c);
       for(i=0,j=0;i<=n;i++){
            if(c[i]==' '){
                reverse(c1);
                printf(" ");
                j=0;
            }
            else if(i==n) reverse(c1);
            else c1[j++]=c[i];
            c1[j]='\0';
        }
        printf("\n");
    }
    return 0;
}

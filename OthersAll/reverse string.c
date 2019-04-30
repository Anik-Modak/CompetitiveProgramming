#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,k=0,x;
    char c[100],c1[100][200],t;
    while(scanf("%[^\n]",c)!=EOF){
            for(i=0;c[i]!='\0';i++){
                if(c1[i]==" "){
                    c1[k][j]='\0';
                    k++;
                    j=0;
                }
                else{
                    c1[k][j]==c[i];
                    j++;
                }
            }
            c1[k][j]=='\0';
            for(i=0;i<=k;i++){
                for(j=0,x=strlen(c)-1;j<x;j++,x--){
                    t=c1[i][j];
                    c1[i][j]=c1[i][x];
                    c1[i][x]=t;
                }
            }
            for(i=0;i<=k;i++){
                printf("%s",c1[i]);
            }
    }
    return 0;
}

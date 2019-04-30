#include<stdio.h>
#include<string.h>
int main()
{
    char c[100],c1[100];
    int i,n,s,a,j;
    gets(c);
    printf("%s\n",c);
    n=strlen(c);
    for(i=n-1;i>0;i--){
        printf("%c",c[i]);
    }
    printf("\n");
    scanf("%s",c1);
    for(i=0;i<n;i++)
    {
        s=i;
        a=0;
        for(j=0;j<strlen(c1);j++)
        {
            if(c[i]==c1[j]){
                a++;
                i++;
            }
        }
        if(a==strlen(c1)){
            printf("%d\n",s+1);
        }
    }
    return 0;
}

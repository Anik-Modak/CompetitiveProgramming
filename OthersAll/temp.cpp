#include<stdio.h>
#include<string.h>
int main()
{
    int k,i,sum=0,sl,tl,max;
    char s[101],t[100];
    scanf("%s",s);
    scanf(" %s ",t);
    scanf("%d",&k);
    sl=strlen(s);
    tl=strlen(t);
    max=(sl>tl)?sl:tl;
    sum=sl+tl;
    if(sum<=k)
        printf("YES\n");
    else{

        for(i=0;i<max-1;i++)
        {
            if(s[i]==t[i])
                continue;
            else{
                break;
            }
        }
        sum=(sl-i)+(tl-i);
        if(sum<=k) printf("Yes\n");
        else printf("No\n");


    }
    return 0;
}

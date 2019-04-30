#include<stdio.h>
#include<string.h>
char *replace_str(char *str, char *orig, char *rep)
{
  static char word[100];
  char *p;

  if(!(p = strstr(str, orig)))
    return str;

  strncpy(word, str, p-str);
  word[p-str] = '\0';

  sprintf(word+(p-str), "%s%s", rep, p+strlen(orig));

  return word;
}
int main()
{
    char c[50],c1[10],c2[20];
    int n,i,j,k,a;
    scanf("%[^\n]",c);
    n=strlen(c);
    printf("Replace word: ");
    scanf("%s",c1);
    printf("Replace in word: ");
    scanf("%s",c2);
    for(i=0;i<n;i++)
    {
        a=0;
        for(j=0;j<strlen(c1);j++)
        {
            if(c[i]==c1[j]){
                a++;
                i++;
            }
        }
        if(a==strlen(c1)){
            for(k=0, j=i-strlen(c1); k<strlen(c2); k++,j++) c[j]=c2[k];
            //strcpy(c,(replace_str(c,c1,c2)));
        }
    }
    printf("%s\n",c);
    return 0;
}

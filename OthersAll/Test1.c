#include <stdio.h>

int main(){
    int i;
    char s1[45+6],s2[45+6];
    scanf("%s",s1);
    strcpy(s2,s1);
    for(i=0;i<strlen(s2);i++){
        if(s2[i]>='A' && s2[i]<='Z')
            s2[i]=s2[i]+32;
    }
    printf("%s\n",s2);
}

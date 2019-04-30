#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int i,n;
    while(gets(c)){
        n=strlen(c);
        for(i=0;i<n;i++){
            if(c[i]=='>'||c[i]=='.') printf("m");
            else if(c[i]=='<'||c[i]==',') printf("n");
            else if(c[i]=='M'||c[i]=='m') printf("b");
            else if(c[i]=='N'||c[i]=='n') printf("v");
            else if(c[i]=='B'||c[i]=='b') printf("c");
            else if(c[i]=='V'||c[i]=='v') printf("x");
            else if(c[i]=='C'||c[i]=='c') printf("z");
            else if(c[i]=='"'||c[i]=='\'') printf("l");
            else if(c[i]==':'||c[i]==';') printf("k");
            else if(c[i]=='L'||c[i]=='l') printf("j");
            else if(c[i]=='K'||c[i]=='k') printf("h");
            else if(c[i]=='J'||c[i]=='j') printf("g");
            else if(c[i]=='H'||c[i]=='h') printf("f");
            else if(c[i]=='G'||c[i]=='g') printf("d");
            else if(c[i]=='F'||c[i]=='f') printf("s");
            else if(c[i]=='D'||c[i]=='d') printf("a");
            else if(c[i]=='}'||c[i]==']') printf("p");
            else if(c[i]=='{'||c[i]=='[') printf("o");
            else if(c[i]=='P'||c[i]=='p') printf("i");
            else if(c[i]=='O'||c[i]=='o') printf("u");
            else if(c[i]=='I'||c[i]=='i') printf("y");
            else if(c[i]=='U'||c[i]=='u') printf("t");
            else if(c[i]=='Y'||c[i]=='y') printf("r");
            else if(c[i]=='T'||c[i]=='t') printf("e");
            else if(c[i]=='R'||c[i]=='r') printf("w");
            else if(c[i]=='E'||c[i]=='e') printf("q");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}

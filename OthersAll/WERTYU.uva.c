#include<stdio.h>
#include<string.h>
int main()
{
    char c[1000];
    int i,n;
    while(gets(c)){
        n=strlen(c);
        for(i=0;i<n;i++){
            if(c[i]==',') printf("M");
            else if(c[i]=='M') printf("N");
            else if(c[i]=='N') printf("B");
            else if(c[i]=='B') printf("V");
            else if(c[i]=='V') printf("C");
            else if(c[i]=='C') printf("X");
            else if(c[i]=='/') printf(".");
            else if(c[i]=='.') printf(",");
            else if(c[i]==';') printf("L");
            else if(c[i]=='\'') printf(";");
            else if(c[i]=='L') printf("K");
            else if(c[i]=='K') printf("J");
            else if(c[i]=='J') printf("H");
            else if(c[i]=='H') printf("G");
            else if(c[i]=='G') printf("F");
            else if(c[i]=='F') printf("D");
            else if(c[i]=='D') printf("S");
            else if(c[i]=='[') printf("P");
            else if(c[i]=='\\') printf("]");
            else if(c[i]==']') printf("[");
            else if(c[i]=='P') printf("O");
            else if(c[i]=='O') printf("I");
            else if(c[i]=='I') printf("U");
            else if(c[i]=='U') printf("Y");
            else if(c[i]=='Y') printf("T");
            else if(c[i]=='T') printf("R");
            else if(c[i]=='R') printf("E");
            else if(c[i]=='E') printf("W");
            else if(c[i]=='W') printf("Q");
            else if(c[i]=='S') printf("A");
            else if(c[i]=='X') printf("Z");
            else if(c[i]=='1') printf("`");
            else if(c[i]=='2') printf("1");
            else if(c[i]=='3') printf("2");
            else if(c[i]=='4') printf("3");
            else if(c[i]=='5') printf("4");
            else if(c[i]=='6') printf("5");
            else if(c[i]=='7') printf("6");
            else if(c[i]=='8') printf("7");
            else if(c[i]=='9') printf("8");
            else if(c[i]=='0') printf("9");
            else if(c[i]=='-') printf("0");
            else if(c[i]=='=') printf("-");
            else printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}


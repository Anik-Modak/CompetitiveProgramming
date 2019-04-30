//Anik_Modak
#include<stdio.h>

int main()
{
    FILE *fr, *fout1, *fout2;
    fr = fopen("inputfile.txt", "r");
    fout1 = fopen("file2.txt", "w");
    fout2 = fopen("file3.txt", "w");

    char str[100];

    while(fscanf(fr,"%s",str)==1)
    {
        if(str[0]=='A'||str[0]=='E'||str[0]=='I'||str[0]=='O'||str[0]=='U'||str[0]=='a'||str[0]=='e'||str[0]=='i'||str[0]=='o'||str[0]=='u') fprintf(fout1,"%s\n",str);
        else fprintf(fout2,"%s\n",str);

    }
    return 0;
}

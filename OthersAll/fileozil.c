#include<stdio.h>
struct{
    char title[100];
    char author[100];
    int page;
    int prize;
}book[100];
int main()
{
    int min,c,i;
    FILE *fp1,*fp2;

    fp1=fopen("input.txt","r");
    fp2=fopen("output.txt","w");

    for(i=1;i<=100;i++)
    {
        fscanf(fp1,"%s %s %d %d",book[i].title,book[i].author,&book[i].page,&book[i].prize);
        if(i==1) min=book[i].prize;
        if(min>=book[i].prize){
                min=book[i].prize;
                c=i;
        }
    }
    fprintf(fp2,"%s %s %d %d",book[c].title,book[c].author,book[c].page,book[c].prize);
    return 0;
}

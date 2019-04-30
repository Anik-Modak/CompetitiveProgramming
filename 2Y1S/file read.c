#include<stdio.h>
int main()
{
    int roll;
    char name[10];
    double marks;
    FILE *fr;
    fr=(fopen("input.txt","r"));

    while(fscanf(fr,"%d %s %lf",&roll,name,&marks)!=EOF){
        if(roll==5)
            printf("Name: %s Marks: %lf\n",name,marks);
    }
    fclose(fr);
}


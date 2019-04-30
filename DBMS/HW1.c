//Anik_Modak
#include<stdio.h>

int main()
{
    FILE *fr;
    fr = fopen("inputfile.csv", "r");

    int input;
    printf("Enter Your Roll: ");
    scanf("%d",&input);

    char str[100];
    int roll;
    double gpa;

    while(fscanf(fr,"%s %d %lf",str,&roll,&gpa)==3)
    {
        if(roll == input)
        {
            printf("Name: %s Roll: %d Marks: %.2lf\n",str,roll,gpa);
        }
    }
    return 0;
}


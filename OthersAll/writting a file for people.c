#include <stdio.h>

void main()
{
    FILE *fptr;
    char name[20][20];
    int i;
    float salary;

    fptr = fopen ("emp.rec", "w"); /* open for writing*/
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    for(i=1;i<=3;i++){
        scanf("%s", name[i]);
        fprintf(fptr, "Name    = %s\n", name[i]);
    }
    fclose(fptr);
}

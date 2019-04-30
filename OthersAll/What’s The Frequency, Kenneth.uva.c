#include <stdio.h>
int main()
{
    int i;
    char *suffix[]= { "st", "nd", "rd" };
    char *item[]= { "Unix" , "cat", "sed", "awk", "grep", "ed", "vi"};
    printf("In the beginning, there was nothing.\n");
    for (i= 0; i < 7; i++)
    printf("And on the %d%s day, God created %s. And it was good.\n",
    i + 1, (i < 3) ? suffix[i] : "th", item[i]);
    return 0;
}

#include<stdio.h>
struct student{
    int id[50];
    char name[10][10];
    int phone[10];
};
int main()
{
    struct student dt;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf(" %[^\n]",dt.name[i]);
        scanf(" %d",&dt.phone[i]);
        scanf("%d",&dt.id[i]);
    }
    for(i=1;i<=n;i++)
    {
        printf("%s",dt.name[i]);
        printf("%d",dt.phone[i]);
        printf("%d",&dt.id[i]);
    }
    return 0;
}


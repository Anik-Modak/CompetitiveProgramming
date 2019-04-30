#include<stdio.h>
struct familyInfo{
    char mn[20];
    char fn[20];
    int cn;
    float in;
    float ex;
}fi[10];
int main()
{
    int i;
    for(i=1;i<=3;i++){
        scanf(" %[^\n]s",fi[i].mn);
        scanf(" %[^\n]s",fi[i].fn);
        scanf("%d",&fi[i].cn);
        scanf("%f",&fi[i].in);
        scanf("%f",&fi[i].ex);
    }
     for(i=1;i<=3;i++){
        printf("%s\n",fi[i].mn);
        printf("%s\n",fi[i].fn);
        printf("%d\n",fi[i].cn);
        printf("%.2f\n",fi[i].in);
        printf("%.2f\n",fi[i].ex);
    }
    return 0;
}

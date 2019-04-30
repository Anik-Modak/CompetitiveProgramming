#include<stdio.h>
main()
{
    int n=3333;
    char t='A';
    float b=9.99;
    typedef struct{
        int month;
        int day;
        int year;
        } date;
   struct{
   int *no;
   char *type;
   char *name;
   float *ba;
   date payment;
   } customer, *pc=&customer;
   customer.no=&n;
   customer.type=&t;
   customer.ba=&b;
   customer.name="Anik";
   printf("%d %c %s %.2f\n",*customer.no,*customer.type,customer.name,*customer.ba);
}

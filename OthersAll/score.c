#include<stdio.h>
int main()
{
int n;
printf("Score: ");
scanf("%d",&n);
if(n>=80){
    printf("A+");}
else if(n>=70){
    printf("A");}
else if(n>=55){
    printf("B");}
else if(n>=45){
    printf("C");}
else{
    printf("F");}
return 0;
}

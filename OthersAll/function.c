#include <stdio.h>
int find_max(int ara[], int n);
int main()
{
int i,n=11,max,ara[11];
    for(i=0;i<n;i++){
    scanf("%d",&ara[i]);
    }
   max= find_max(ara[],n);
   printf("%d\n",max);
return 0;
}
find_max(int ara[], int n)
{
int max = ara[0];
int i;
for(i = 1; i < n; i++) {
    if (ara[i] > max) {
        max = ara[i];
    }
}
return max;
}

#include<stdio.h>

int fun(int n)
{
   if (n > 100) return n - 10;
   return fun(fun(n+11));
}

int main()
{
  int n;
  scanf("%d",&n);
  printf(" %d ", fun(n));
 // getchar();
  return 0;
}

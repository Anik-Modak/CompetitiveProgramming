#include<bits/stdc++.h>

using namespace std;

int main()
{
  int x[6]={2,3,4,5,1,90};
  int *p = max_element(x,x+6);
  printf("%d\n",*p);
  return 0;
}

#include<stdio.h>

long double fact(int n)
{
    if(n<=1) return 1;
    else return n*fact(n-1);
}


int main()
{
  int N,M,mx,store;
  long double temp,val;
  unsigned long long int res;

  while(scanf("%d %d",&N,&M) && (N || M))
  {
      temp = 1;
      store = N;
      if(M>=(N-M)) mx = M;
      else  mx = (N-M);

      while(N>mx)
      {
          temp*=N;
          --N;
      }

      if(mx==M)val = fact(store-M);
      else val = fact(M);

      val = temp/val;
      res = val;
      printf("%d things taken %d at a time is %lld exactly.\n",store,M,res);
  }

  return 0;
}

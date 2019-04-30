#include<bits/stdc++.h>
using namespace std;
#define MX 1002
int stock_prices[MX], nDay, marked[MX];

int getMaximumOP(int start, int end){
   int ret = -1, mx = 0;
   for(int i = start; i <= end; i++){
       if(!marked[i] && mx <= stock_prices[i]){
           mx = stock_prices[i];
           ret = i;
       }
   }
   return ret;
}
int getMinimumOP(int start, int end){
   int ret = -1, mn = 1000000000;
   for(int i = start; i <= end; i++){
       if(!marked[i] && mn > stock_prices[i]){
           mn = stock_prices[i];
           ret = i;
       }
   }
   return ret;
}
int optimalResult(int stock_prices[], int start, int end){
   int profit = 0, i;
   for(i = start; i <= end; i++) marked[i] = 0;
   while(1){
       int X = getMaximumOP(start, end);
       int Y = getMinimumOP(start, end);
       if(X==-1 || Y==-1)break;
       profit += stock_prices[X] - stock_prices[Y];
       marked[X] = marked[Y] = 1;
   }
   return profit;
}
int getMaximum(int start, int end){
   int ret = -1, mx = 0;
   for(int i = start; i <= end; i++){
       if(!marked[i] && mx <= stock_prices[i]){
           mx = stock_prices[i];
           ret = i;
       }
   }
   return ret;
}
int getMinimum(int start, int end){
   int ret = -1, mn = 1000000000;
   for(int i = start; i <= end; i++){
       if(!marked[i] && mn > stock_prices[i]){
           mn = stock_prices[i];
           ret = i;
       }
   }
   return ret;
}
int getProfit(int start, int end){
   int profit = 0, i;
   for(i = start; i <= end; i++) marked[i] = 0;
   while(1){
       int X = getMaximum(start, end);
       int Y = getMinimum(start, X - 1); //???
       if(X==-1 || Y==-1)break;
       profit += stock_prices[X] - stock_prices[Y];
       marked[X] = marked[Y] = 1;
   }
   return profit;
}
bool check(int stock_prices[], int nDay){
  int k;
  for(k = 1 ; k <= nDay - 4 ; k++ ){
      int X = getProfit(1, k);
      int Y = optimalResult(stock_prices, 1, k);
      if(X != Y) return false;
  }
  return true;
}
int main(){
   scanf("%d",&nDay);
   for(int i = 1; i <= nDay; i++) scanf("%d", &stock_prices[i]);
   if(check(stock_prices, nDay)) printf("YES\n");
   else printf("No\n");
   return 0;
}

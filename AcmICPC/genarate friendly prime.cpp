#include<bits/stdc++.h>
using namespace std;

bool myfunc(int d){

  return (d == 2 || d == 3 || d == 5 || d == 7);
}

bool checker(long long n){
   long long test = n;
   bool digit_prime = true;
   bool prime = true;

   while(test){

     int d = test % 10;
     if(!myfunc(d)){
        digit_prime = false;
        return false;
        break;
     }
     test/=10;
   }

   for(int i = 2; i < n; i++){

      if(n % i == 0){
        prime  = false;
        break;
      }
   }

   return digit_prime && prime;
}

int main(){

   long long limit = 1000000000;
   int counter = 0;
  for(long long i = limit; i >=2; i--){

    if(checker(i)){
        ++counter;
        printf("%lld\n",i);
    }
  }

  printf("%d\n",counter);
 return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main(){
   int nDay = 100;
   printf("%d\n", nDay);
   for(int i=nDay;i>=4;i--){
        if(i==4) printf("1 1 1 1\n");
        else if(i<50) printf("9 ");
        else printf("8 ");
   }
   return 0;
}



#include <iostream>

int xGCD(int a, int b, int &x, int &y)
{

    if(b == 0) {
       x = 1;
       y = 0;
       return a;
    }

    int x1, y1, gcd ;
    gcd= xGCD(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    std::cout<<x<<" "<<y<<" ";
    return gcd;
}

int main()
{
   int a = 10, b = 6, x, y, gcd;

   if(a < b) std::swap(a, b);

   gcd = xGCD(a, b, x, y);
   std::cout << "GCD: " << gcd << ", x = " << x << ", y = " << y << std::endl;

   return 0;
}

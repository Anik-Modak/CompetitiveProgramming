
// C++ program to count number of odd squares
// in given range [n, m]
#include <bits/stdc++.h>
using namespace std;

int countOddSquares(int n, int m)
{
   return (int)pow(m,0.5) - (int)pow(n-1,0.5);
}

// Driver code
int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        cout << "Count is " << countOddSquares(n, m);
    }
    return 0;
}

//Anik_Modak
#include<iostream>
using namespace std;

int main()
{
    long long int row, colom, ans, n;
    cin >> row >> colom;

    n = row + colom -2;
    ans = (n * (n+1)) / 2;

    if(n % 2 == 0) ans = ans + colom;
    else ans = ans + row;

    cout << ans << endl;

    return 0;
}

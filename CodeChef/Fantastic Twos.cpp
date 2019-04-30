#include <iostream>
using namespace std;

int main()
{
    long long int n, arr, cnt = 0, one;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> arr;
        one = __builtin_popcount(arr);
        if((one == 2 || one == 1) && arr != 1)
            cnt++;
    }
    cout << cnt;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int factorialDigitExtended ( int n, int base ) {
    double x = 0;
    double lbase = 1 / log10(base);
    for ( int i = 1; i <= n; i++ ) x += log10 ( i );
    x *= lbase;
    int res = ( (int) x ) + 1;
    return res;
}
int main()
{
    int i, t, n, b;
    cin>>t;
    for(i=1; i<= t; i++){
        scanf("%d %d", &n, &b);
        printf("Case %d: %d\n", i, factorialDigitExtended(n, b));
    }
    return 0;
}

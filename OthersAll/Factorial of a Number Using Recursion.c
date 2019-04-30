#include <stdio.h>
long long multiply(long long n)
{
    if (n >= 1)
        return n*multiply(n-1)%1000000000000000000;
    else
        return 1;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lld", n, multiply(n));
    return 0;
}


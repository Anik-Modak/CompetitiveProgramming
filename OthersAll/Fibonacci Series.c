#include <stdio.h>

long long fibonacci(int i)
{
    if(i == 0)
        return 0;
    if(i == 1)
        return 1;
    return fibonacci(i-1) + fibonacci(i-2);
}
int  main()
{
    int i,n;
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        printf("%lld\n", fibonacci(i));
    }
    return 0;
}

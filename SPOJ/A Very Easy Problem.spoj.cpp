//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define ll long long
using namespace std;

void fn(int n)
{
    if(n==1)
    {
        printf("2(0)");
        return;
    }

    if(n==2)
    {
        printf("2");
        return;
    }

    if(n==3)
    {
        printf("2 + 2(0)");
        return ;
    }

    if(n%2==1)
        fn(n-1) + fn(1);
    else
        fn(n-1);
}

int main()
{
    fn(8);
}

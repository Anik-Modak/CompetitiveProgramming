#include<bits/stdc++.h>
using namespace std;

void primeFactors(int n)
{
    while (n%2 == 0){
        if(n==2) printf("2\n");
        else printf("2 x ");
        n=n/2;
    }
    for (int i=3; i<=sqrt(n); i=i+2)
    {
        while(n%i==0)
        {
            if(n==i) printf("%d\n",i);
            else printf("%d x ",i);
            n=n/i;
        }
    }
    if(n>2) printf ("%d\n", n);
}

int main()
{
    int n;
    while(cin>>n){
        if(n==0) break;
        else if(n<0){
                printf("%d = -1 x ",n);
                n=-n;
        }
        else printf("%d = ",n);
        primeFactors(n);
    }
}

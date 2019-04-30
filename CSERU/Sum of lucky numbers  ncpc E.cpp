//Anik_Modak
#include<bits/stdc++.h>
#define MAX 2000000
using namespace std;

bool a[MAX]={0};

void fn()
{
    for(int i=0; i<=MAX; i=i+2) a[i]=1;

    int i=3,in,de=3;
    while(i<=sqrt(MAX))
    {
        int c=0,d=0;
        for(int j=1; j<=MAX; j=j+2)
        {
            if(a[j]==0) c++;
            if(c%i==0){
                a[j]=1;
                d--;
            }
            if(d==de&&a[j]==0) in=j;
        }
        i=in;
        de++;
    }
}
int main()
{
    int n;
    fn();
    while(cin>>n)
    {
        int p=1;
        for(int i=1; i<=n/2; i++)
        {
            if(a[i]==0&&a[n-i]==0){
                printf("%d is the sum of %d and %d.\n",n,i,n-i);
                p=0;
                break;
            }
        }
        if(p) printf("%d is not the sum of two luckies!\n",n);
    }
}


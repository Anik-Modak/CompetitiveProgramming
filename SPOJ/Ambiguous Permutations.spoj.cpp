//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

bool fn(int a[], int b[], int n)
{
    for(int i=1; i<=n; i++)
       if(a[i] != b[i])
            return 0;
    return 1;
}

int main()
{
    int n;
    while(cin>>n && n)
    {
        int a[n+2], b[n+2];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
            b[a[i]] = i;
        }

        if(fn(a,b,n))
            cout<<"ambiguous\n";
        else
            cout<<"not ambiguous\n";
    }
    return 0;
}

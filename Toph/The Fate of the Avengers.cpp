//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;

    while(n--)
    {
        cin>>a;
        if(a<=10) printf("Avenger %d Rocks\n",a);
        else printf("Avenger %d Sucks\n",a);
    }
    return 0;
}


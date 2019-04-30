//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);
    int p, q;
    cin>>q;

    while(q--)
    {
        cin>>p;
        cout<<a[p]<<endl;
    }
    return 0;
}


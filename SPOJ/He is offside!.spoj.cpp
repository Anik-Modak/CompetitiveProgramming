//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while(cin>>n>>m && n|m)
    {
        int a[n], b[m];
        for(int i=0; i<n; i++)
            cin>>a[i];

        for(int i=0; i<m; i++)
            cin>>b[i];

        sort(a, a+n);
        sort(b, b+m);

        if(a[0] >= b[1])
            cout<<"N\n";
        else
            cout<<"Y\n";
    }
    return 0;
}

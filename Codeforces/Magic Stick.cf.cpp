//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int  a, b;
        cin>>a>>b;

        if(a==b || a > 3)
            cout<<"YES\n";
        else
        {
            if(b==1 || (a==2 && b==3) || (b==2 && a==3))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}



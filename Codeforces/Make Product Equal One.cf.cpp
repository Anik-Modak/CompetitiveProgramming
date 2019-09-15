//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int po, ne, ze;
    po = ne = ze = 0;

    long long a, ans = 0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a>0)
        {
            po++;
            ans += (a-1);
        }
        else if(a<0)
        {
            ans += (abs(a) - 1);
            ne++;
        }
        else
            ze++;
    }

    if(ne%2 && ze<1)
        ans += 2;
    ans += ze;

    cout<<ans<<"\n";
    return 0;
}

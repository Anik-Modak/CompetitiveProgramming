//Anik_Modak
#include<bits/stdc++.h>
#define MAX 105
#define mem(x,y) memset(x,y,sizeof(x));
#define ll long long
#define pii pair<int,int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;

    ll a, ans = 0;
    while(n--)
    {
        cin>>a;
        ans = ans^a;
    }

    cout<<ans<<"\n";
    return 0;
}




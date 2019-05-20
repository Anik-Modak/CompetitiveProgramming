//Anik_Modak
#include<bits/stdc++.h>
#define MAX 10000000005
#define mem(x,y) memset(x,y,sizeof(x));
#define ll long long
#define pii pair<int,int>
using namespace std;

map<ll, bool> mp;
void fn()
{
    for(ll i = 1, j = 0; i<MAX; i += (6*j))
    {
        mp[i] = 1;
        j++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    fn();
    ll n;

    while(cin>>n)
    {
        if(n==-1)
            break;

        if(mp.find(n) != mp.end())
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}





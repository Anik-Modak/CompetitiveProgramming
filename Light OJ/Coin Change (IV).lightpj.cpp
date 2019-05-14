//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> ans;
void subset(int i, vector<ll>a, ll sum)
{
    if(i==a.size())
    {
        ans.push_back(sum);
        return;
    }
    subset(i+1, a, sum);
    subset(i+1, a, sum+a[i]);
    subset(i+1, a, sum+2*a[i]);
}

int main()
{
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        ll n, k, x;
        cin>>n>>k;

        vector<ll> a, b;
        for(int i=0; i<n; i++)
        {
            cin >> x;
            if(i%2==0)
                a.push_back(x);
            else
                b.push_back(x);
        }

        ans.clear();
        subset(0,a,0);
        a = ans;

        ans.clear();
        b.push_back(0);
        subset(0,b,0);
        b = ans;

        int flag = 0;
        sort(a.begin(),a.end());

        for(int i=0; i<b.size(); i++)
        {
            ll tmp = k - b[i];
            if(tmp>0 && binary_search(a.begin(),a.end(), tmp))
            {
                flag = 1;
                break;
            }
        }

        if(flag)
            printf("Case %d: Yes\n",++cas);
        else
            printf("Case %d: No\n",++cas);
    }
    return 0;
}

//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;

    int a[m][n], sum[n] = {0};
    for(int i=0; i<m; i++)
    {
        int mx = 0;
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
            sum[j] += a[i][j];
        }
    }

    int mn = INT_MAX;
    vector<int> ans, tmp;

    for(int i=0; i<n-1; i++)
    {
        vector<pii> v;
        for(int j=0; j<m; j++)
            v.push_back({a[j][i]-a[j][n-1], j});
        sort(v.begin(), v.end());

        int tmp1 = sum[i], tmp2 = sum[n-1];
        for(int j=0; j<v.size(); j++)
        {
            if(tmp1 >= tmp2)
                break;
            tmp1 -= a[v[j].second][i];
            tmp2 -= a[v[j].second][n-1];
            tmp.push_back(v[j].second+1);
        }

        if(mn > tmp.size())
        {
            ans.clear();
            ans = tmp;
            mn = ans.size();
        }
        tmp.clear();
    }

    cout<<ans.size()<<"\n";
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<< " ";
    cout<<"\n";

    return 0;
}

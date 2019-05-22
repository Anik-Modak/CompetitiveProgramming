//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int B;
pii dp[105][505];
vector<pii>v;

void init()
{
    for(int i=0; i<101; i++)
        for(int j=0; j<501; j++)
            dp[i][j] = {-1,-1};
}

pii operator + (pii a, pii b)
{
    pii res;
    res.first = a.first + b.first;
    res.second = a.second + b.second;
    return res;
}

pii solve(int i, int w)
{
    if(i==v.size())
        return {0,0};

    if(dp[i][w].first != -1)
        return dp[i][w];

    pii p1, p2;
    if(w + v[i].first <= B)
        p1 = v[i] + solve(i+1, w + v[i].first);
    else
        p1 = {0,0};
    p2 = solve(i+1, w);

    int a, b;
    if(p1.second == p2.second)
    {
        if(p1.first < p2.first)
            a = p1.first, b = p1.second;
        else
            a = p2.first, b = p2.second;
    }
    else if(p1.second > p2.second)
        a = p1.first, b = p1.second;
    else
        a = p2.first, b = p2.second;

    return dp[i][w] = {a,b};
}

int main()
{
    int m;
    ios_base::sync_with_stdio(false);

    while(cin>>B>>m && B|m)
    {
        for(int i=0; i<m; i++)
        {
            int a, b;
            cin>>a>>b;
            v.push_back({a,b});
        }

        init();
        pii ans = solve(0,0);

        cout<<ans.first<<" "<<ans.second<<endl;
        v.clear();
    }
    return 0;
}

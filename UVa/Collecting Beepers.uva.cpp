//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int, int>
#define INF 10000007
#define MX 22
using namespace std;

int distance(pii a, pii b)
{
    return abs(a.first-b.first) + abs(a.second-b.second);
}

int totaldis(vector<pii> v)
{
    int sum = 0;
    for(int i=1; i<v.size(); i++)
        sum += distance(v[i-1], v[i]);
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n, m, sx, sy;
        cin>>n>>m>>sx>>sy;

        vector<pii>v;
        int q, x, y;
        cin>>q;

        while(q--)
        {
            cin>>x>>y;
            v.push_back({x,y});
        }

        int mn, len = v.size() - 1;
        mn = distance(pii{sx,sy}, v[0]) + totaldis(v) + distance(pii{sx,sy}, v[len]);

        while(next_permutation(v.begin(), v.end()))
        {
            int tmp = distance(pii{sx,sy}, v[0]) + totaldis(v) + distance(pii{sx,sy}, v[len]);
            mn = min(mn, tmp);
        }
        cout<<"The shortest path has length "<<mn<<"\n";
    }
    return 0;
}

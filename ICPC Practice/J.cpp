#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#define pii pair<int, int>
using namespace std;

vector<pii>v;
int main()
{
    ios::sync_with_stdio(false);
    int n;
    while(cin>>n && n)
    {
        int a, b;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            v.push_back({a,b});
        }

        int cnt = 0;
        sort(v.begin(), v.end());

        for(int i=0; i<n; i++)
        {
            int ck = 1, j = 0;
            while(j < i && ck)
            {
                if(v[j].second <= v[i].second && v[j].first < v[i].first)
                    ck = 0;
                j++;
            }

            j = i + 1;
            while(j < n && ck)
            {
                if(v[j].second >= v[i].second && v[j].first > v[i].first)
                    ck = 0;
                j++;
            }

            if(ck)
                cnt++;
        }
        v.clear();
        cout<<cnt<<"\n";
    }
    return 0;
}

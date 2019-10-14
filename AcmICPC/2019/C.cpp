//RU_BinaryCode
#include<bits/stdc++.h>
#define pii pair<int, int>
#define ll long long
#define MX 10005
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        map<int, pii> mp;
        vector<int>v[n+2];

        for(int i=0; i<n; i++)
        {
            int id, sp, pa, m, t;
            cin>>id>>sp>>pa>>m;
            mp[id] = {sp, pa};

            for(int j=0; j<m; j++)
            {
                cin >> t;
                v[id].push_back(t);
            }
        }

        int psum = 0, psps = 0, ck = 1;
        for(int i=0; i<n; i++)
        {
            int pos;
            cin>>pos;

            if(i==0)
            {
                psum = mp[pos].second;
                psps = mp[pos].first;

                if(!v[pos].empty())
                {
                    for(int j=0; j<v[pos].size(); j++)
                    {
                        psum += v[pos][j];
                        psps ++;
                    }
                }
            }
            else
            {
                int sum = mp[pos].second;
                int sps = mp[pos].first;

                if(sps > psps || (sps==psps && sum < psum))
                {
                    ck = 0;
                    continue;
                }

                if(!v[pos].empty())
                {
                    for(int j=0; j < v[pos].size(); j++)
                    {
                        sum += v[pos][j];
                        sps ++;
                    }

                    reverse(v[pos].begin(), v[pos].end());
                    int j = 0;
                    while(sps > psps)
                    {
                        sum -= v[pos][j];
                        sps --;
                        j++;
                    }

                    if(psum > sum && sps==psps)
                    {
                        sum -= v[pos][j];
                        sps --;
                    }
                }

                if(sps == psps && sum < psum)
                    ck = 0;
                psps = sps;
                psum = sum;
            }
        }

        if(ck)
            cout<<"Case "<< ++cas <<": We respect our judges :)\n";
        else
            cout<<"Case "<< ++cas <<": Say no to rumour >:\n";
    }
    return 0;
}



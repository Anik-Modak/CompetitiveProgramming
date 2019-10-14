#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;

        int p = 0, cnt = 0;
        double sum = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                cnt++;
                sum += i;
            }
        }

        if(cnt)
            p = round(sum/cnt);

        long long ans = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(i <= abs(p-i))
                {
                    cnt--;
                    sum -= i;
                    if(cnt)
                        p = round(sum/cnt);
                    ans += min(i+1, abs(p-i)+1);
                }
                else
                    ans += min(i+1, abs(p-i)+1);
            }
        }
        cout<<"Case #"<<++cas<<": "<<ans<<"\n";
    }
    return 0;
}


//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    while(cin>>s)
    {
        if(s=="0")
            break;

        ll dp[5005] = {0};

        dp[0] = 1;
        for(int i=1; i<s.size(); i++)
        {
            int n = (s[i-1]-'0')*10 + (s[i]-'0');

            if(s[i]-'0')
                dp[i] = dp[i-1];
            if(n>9 && n <= 26)
            {
                 if(i==1)
                    dp[i] += 1;
                 else
                    dp[i] += dp[i-2];
            }
        }
        cout<<dp[s.size()-1]<<"\n";
    }
    return 0;
}

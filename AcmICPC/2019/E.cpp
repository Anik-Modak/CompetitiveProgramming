//RU_BinaryCode
#include<bits/stdc++.h>
#define ll long long
#define MX 10005
using namespace std;

string s;
map<char, int> mp;

void fn(int n)
{
    for(int i=0; i<n; i++)
        mp[s[i]]++;
}

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt","r",stdin);
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int n, k, cnt = 0;
        cin>>n>>k>>s;

        fn(n);
        char mid;
        for(char ch = 'a'; ch <= 'z'; ch++)
        {
            if(mp[ch] % 2 == 1)
            {
                cnt++;
                mid = ch;
            }
        }

        if(cnt <= 1)
        {
            int ans = 0;
            if(cnt==1 && s[n/2] != mid)
                ans++;

            int i = 0, j = n-1;
            while(i <= j)
            {
                if(s[i] != s[j])
                    ans++;
                i++;
                j--;
            }
            cout<<"Case "<<++cas<<": "<<(ans+1)/2<<"\n";
        }
        else
            cout<<"Case "<<++cas<<": -1\n";

        s.clear();
        mp.clear();
    }
    return 0;
}



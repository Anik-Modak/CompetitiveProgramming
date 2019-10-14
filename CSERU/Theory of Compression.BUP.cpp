//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s, t;
int main()
{
    ios::sync_with_stdio(false);
    int test, cas = 0;
    cin >> test;

    while(test--)
    {
        string tmp;
        cin >> s;

        int m = 0;
        for(int i=0; i<s.size();  i++)
        {
            if(isdigit(s[i]))
            {
                m = m*10 + s[i] - '0';
                if(!isdigit(s[i+1]) || i==s.size()-1)
                {
                    for(int j=0; j<m; j++)
                        t += tmp;
                    tmp.clear();
                }
            }
            else
            {
                m = 0;
                tmp.push_back(s[i]);
            }
        }

        ll n, l, r;
        cin >> n;

        cout<<"Case "<<++cas<<":\n";
        while(n--)
        {
            cin>>l>>r;
            if(r > t.size())
                cout<<"-1\n";
            else
            {
                tmp = t.substr(l-1, r-l+1);
                cout<<tmp<<"\n";
            }
        }
        t.clear();
    }
    return 0;
}

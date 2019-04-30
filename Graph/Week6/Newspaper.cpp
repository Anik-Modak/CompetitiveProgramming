//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, m, p;
        cin>>n;

        map<char,int> mp;
        while(n--)
        {
            char ch;
            cin>>ch>>p;
            mp[ch]=p;
        }

        cin>>m;
        cin.ignore();

        double ans=0.0;
        while(m--)
        {
            string s;
            getline(cin,s);

            for(int i=0; i<s.size(); i++)
                ans+=mp[s[i]];
        }
        printf("%.2f$\n",ans/100.0);
    }
    return 0;
}

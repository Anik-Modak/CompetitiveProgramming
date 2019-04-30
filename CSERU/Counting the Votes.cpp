//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    cin>>t;

    while(t--)
    {
        int n, m;
        scanf("%d\n",&n);

        map<string, pair<int, string> > mp;
        map<string, pair<int, string> >::iterator it;

        while(n--)
        {
            string s,t;
            getline(cin,s);
            getline(cin,t);
            mp[s]=pair<int, string>(0,t);
        }
        scanf("%d\n",&m);

        while(m--)
        {
            string v;
            getline(cin,v);
            if (mp.count(v))
                mp[v]= pair<int, string>(mp[v].first + 1, mp[v].second);
        }

        int mx=-1, cnt =0;
        string ans="";

        for(it=mp.begin(); it!=mp.end(); it++)
        {
            if (it->second.first > mx)
            {
				mx= it->second.first;
				ans = it->second.second;
                cnt = 1;
			}
			else if (it->second.first == mx) cnt++;
        }
        if(cnt>1) cout<<"tie"<<endl;
        else cout<<ans.data()<<endl;

        if(t) cout<<endl;
    }
    return 0;
}



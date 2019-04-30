#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int ans = 0;
    while(getline(cin, s))
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
        }

        int val = -4;
        while((val = s.find("doge",val+4))!=-1)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
}




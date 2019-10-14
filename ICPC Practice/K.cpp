#include<bits/stdc++.h>
#define mem(x,y) memset(x,y,sizeof(x));
#define MX 1000005
using namespace std;

int ans[MX];
string str;
vector<int>v1, v2;

int main()
{
    ios::sync_with_stdio(false);
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='A')
            v1.push_back(i+1);
        else
            v2.push_back(i+1);
    }

    mem(ans, 0);
    for(int i=0; i<v1.size(); i++)
    {
        for(int j=0; j<v2.size(); j++)
        {
            int k = v1[i] - v2[j];
            if(k < 0)
                break;
            ans[k] ++;
        }
    }

    for(int i=1; i<str.size(); i++)
    {
        cout<<ans[i]<<"\n";
    }
    return 0;
}

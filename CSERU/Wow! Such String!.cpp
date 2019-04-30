#include<bits/stdc++.h>
using namespace std;

string s="";
void solve()
{
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<26; j++)
        {
            for(int k=0; k<26; k++)
            {
                for(int l=0; l<26; l++)
                {
                    s += ('z'-i);
                    s += ('z'-j);
                    s += ('z'-k);
                    s += ('z'-l);
                }
            }
        }
    }
}

int main()
{
    int n;
    solve();

    while(cin>>n)
    {
        string ans = s;
        ans.resize(n);

        int val = -4, cnt =0;
        while((val = s.find("aaaz",val+4))!=-1)
        {
            cnt++;
        }
        cout<<cnt<<endl;

        if(n>26*26*26+3) cout<<"Impossible"<<endl;
        else cout<<ans<<endl;
    }
}

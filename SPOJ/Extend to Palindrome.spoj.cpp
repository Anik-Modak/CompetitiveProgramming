//Anik_Modak
#include<bits/stdc++.h>
#define MX 1000005
#define mem(x,y) memset(x,y,sizeof(x));
using namespace std;

int lps[MX];
void lps_calclulation(string key)
{
    int i = 1,j = 0;
    while(key[i])
    {
        if(key[i]==key[j])
        {
            lps[i] = ++j;
            i++;
        }
        else
        {
            if(j)
                j = lps[j-1];
            else
                lps[i++] = 0;
        }
    }
}

int match(string txt,string key)
{
    int i=0, j=0;
    while(txt[i])
    {
        if(txt[i]==key[j])
        {
            i++;
            j++;
        }
        else
        {
            if(j)
                j = lps[j-1];
            else
                i++;
        }
    }
    return j;
}

int main()
{
    //freopen("input.txt","r",stdin);
    string s, rs;
    while(cin>>s)
    {
        rs=s;
        reverse(rs.begin(),rs.end());
        mem(lps,0);
        lps_calclulation(rs);

        int ans = match(s,rs), tmp;
        ans += (s.size()-ans)*2;
        tmp =  ans - s.size();

        rs = s.substr(0,tmp);
        reverse(rs.begin(),rs.end());
        cout<<s+rs<<endl;
    }
}






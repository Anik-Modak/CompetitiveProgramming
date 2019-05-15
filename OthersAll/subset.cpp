
//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int len, n;
string str, ans;
map<string,bool> mp;

void subset(int i)
{
    if(i==len)
    {
        if(ans.size()==n)
        {
            string tmp = ans;
            sort(tmp.begin(),tmp.end());
            mp[tmp] = 1;
        }
        return;
    }

    subset(i+1);
    ans.push_back(str[i]);
    subset(i+1);

    int ln = ans.size();
    ans.resize(ln-1);
}

void allsubset(int i, vector<ll>a, ll sum)
{
    if(i==a.size())
    {
        ans.push_back(sum);
        return;
    }
    allsubset(i+1, a, sum);
    allsubset(i+1, a, sum+a[i]);
}

void allPossibleSubset(vector<ll>a, int n)
{
	for (int i = 0; i < pow(2,n); i++)
	{
	    ll sum = 0;
		for (int j = 0; j < n; j++)
		{
			if ((i & (1 << j)) > 0)
				sum += a[j];
		}
		ans.push_back(sum);
	}
}

int main()
{
    while(cin>>str>>n)
    {
        len = str.size();
        subset(0);

        for(auto it=mp.begin(); it!=mp.end(); it++)
           cout<<it->first<<endl;

        ans.clear();
        mp.clear();
    }
    return 0;
}

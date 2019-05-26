//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int mod(string num, int a)
{
    int res = 0;
    for (int i = 0; i < num.length(); i++)
         res = (res*10 + (int)num[i] - '0') %a;
    return res;
}

int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int a;
        string s;
        cin>>a>>s;

        if(a==0)
            cout<<s<<"\n";
        else if(s[0] =='0')
            cout<<a<<"\n";
        else
        {
            int b = mod(s, a);
            cout<<gcd(a,b)<<"\n";
        }
    }
    return 0;
}

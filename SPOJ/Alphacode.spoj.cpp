//Anik_Modak
#include<bits/stdc++.h>
using namespace std;


long long fact(int n)
{
    if(n<=1) return 1;
    else return n*fact(n-1);
}

int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="0")
            break;

        int ans = 0;
        for(int i=0; i<s.size()-1; i++)
        {
            int n = (s[i]-'0')*10 + (s[i]-'0');
            if(n <= 26) ans++;
        }
        cout<<ans*(ans+1)/2<<endl;
    }
}

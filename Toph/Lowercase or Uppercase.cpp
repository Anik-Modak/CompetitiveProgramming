#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,ca;
    cin>>t;
    for(ca=1; ca<=t; ca++)
    {
        string s;
        cin>>s;
        int c1=0,c2=0,c3=0,ans;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z') c1++;
            else if(s[i]>='A'&&s[i]<='Z') c2++;
            else c3++;
        }
        ans=min(c1,c2)+c3;
        printf("Case %d: %d\n",ca,ans);
    }
}

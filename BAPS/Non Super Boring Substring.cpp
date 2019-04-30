//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

bool pallandrome(string s)
{
    string a=s;
    reverse(a.begin(),a.end());
    if(a==s) return 0;
    else return 1;
}

int main()
{
    int t,ca;
    cin>>t;

    for(int ca=1; ca<=t; ca++)
    {
        int n,ans;
        cin>>n;
        getchar();

        string s;
        cin>>s;
        ans=s.size();

        for(int i=1; i<n; i++)
        {
            for(int j=0; j<s.size()-i; j++)
            {
                string sub=s.substr(j,i+1);
                if(sub.size()==n){
                    if(pallandrome(sub)) ans++;
                }
                else ans++;
            }
        }
        cout<<ans<<endl;
    }
}



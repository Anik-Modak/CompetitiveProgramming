//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        string s,sub;
        cin>>s;

        printf("Case #%d -> ",ca);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='.') break;
            if(i>0 && (s[i]>='A'&&s[i]<='Z'))
            {
                cout<<sub<<" ";
                sub.clear();
            }
            sub=sub+s[i];
        }
        cout<<sub<<endl;
    }
    return 0;
}


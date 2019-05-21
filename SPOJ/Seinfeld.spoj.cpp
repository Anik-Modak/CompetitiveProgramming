//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cas = 0;
    while(++cas)
    {
        string a;
        cin>>a;

        if(a[0] == '-')
            break;

        int cnt = 0, m = a.size();
        stack<char>s;

        for(int i=0; i<m; i++)
        {
            if(a[i]=='{')
                s.push(a[i]);
            else if(a[i]=='}')
            {
                if(!s.empty() && s.top()== '{')
                    s.pop();
                else
                    cnt++;
            }
        }

        int ans = (cnt+1)/2 + (s.size()+1)/2;
        cout<<cas<<". "<<ans<<"\n";
    }
    return 0;
}

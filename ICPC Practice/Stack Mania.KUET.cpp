//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t, cas = 0;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int a[n], b[n];
        stack<int>s;

        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];

        int id = 0;
        for(int i=0; i<n; i++)
        {
            if(b[id] == a[i])
                id++;
            else
            {
                while(id < n && !s.empty() && s.top() == b[id])
                {
                    s.pop();
                    id++;
                }
                s.push(a[i]);
            }
        }

        while(id < n && !s.empty() && s.top() == b[id])
        {
            s.pop();
            id++;
        }

        if(id==n)
            cout<<"Case "<<++cas<<": POSSIBLE\n";
        else
            cout<<"Case "<<++cas<<": IMPOSSIBLE\n";
    }
    return 0;
}

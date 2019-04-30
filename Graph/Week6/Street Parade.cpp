//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    while(cin>>n && n)
    {

        queue<int>q;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            q.push(a);
        }

        int cnt = 1;
        stack<int>s;
        s.push(0);

        while(cnt<n)
        {
            if(q.front()==cnt || s.top()==cnt)
            {
                if(q.front()==cnt)
                    q.pop();
                else
                    s.pop();
                ++cnt;
            }
            else if(!q.empty())
            {
                s.push(q.front());
                q.pop();
            }

            if(q.empty() && s.top()!=cnt)
                break;
        }

        if(cnt==n)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

//BinaryCode
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, cas = 0;
    cin>>n;

    while(n--)
    {
        int q, x, ck = 0;
        cin>>q;

        string s;
        while(q--)
        {
            cin>>x;
            if(x%2==0)
            {
                s.push_back('1');
                ck = 1;
            }
            else if(ck)
                s.push_back('0');
        }
        cout<<"Case "<<++cas<<": "<<s<<endl;
    }
    return 0;
}


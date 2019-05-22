//Anik_Modak
#include<bits/stdc++.h>
#define MX 25
#define pii pair<int,int>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int cnt = 0, it = 0;
        cout<<n<<" ";

        while(it != -1)
        {
            it = s.find("TTT",it);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0;
        while(it != -1)
        {
            it = s.find("TTH",it);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0;
        while(it != -1)
        {
            it = s.find("TTT",it);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0;
        while(it != -1)
        {
            it = s.find("TTT",it);
            cnt ++;
        }
        cout<<cnt<<" ";
    }


}


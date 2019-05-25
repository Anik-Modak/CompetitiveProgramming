//Anik_Modak
#include<bits/stdc++.h>
#define MX 25
#define pii pair<int,int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;
        s.push_back('#');

        int cnt = 0, it = s.find("TTT",0);
        cout<<n<<" ";

        while(it != -1)
        {
            it = s.find("TTT",it+1);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0, it = s.find("TTH",0);
        while(it != -1)
        {
            it = s.find("TTH",it+1);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0, it = s.find("THT",0);
        while(it != -1)
        {
            it = s.find("THT",it+1);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0, it = s.find("THH",0);
        while(it != -1)
        {
            it = s.find("THH",it+1);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0, it = s.find("HTT",0);
        while(it != -1)
        {
            it = s.find("HTT",it+1);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0, it = s.find("HTH",0);
        while(it != -1)
        {
            it  = s.find("HTH",it+1);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0, it = s.find("HHT",0);
        while(it != -1)
        {
            it = s.find("HHT",it+1);
            cnt ++;
        }
        cout<<cnt<<" ";

        cnt = 0, it = s.find("HHH",0);
        while(it != -1)
        {
            it = s.find("HHH",it+1);
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

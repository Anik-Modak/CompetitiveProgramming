//Anik_Modak
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    int len = 0;
    string s;

    while(cin>>s)
    {
        if(s=="<br>")
        {
            cout<<"\n";
            len = 0;
        }
        else if(s=="<hr>")
        {
            if(len)
                cout<<"\n";

            for(int i=0; i<80; i++)
                cout<<"-";
            cout<<"\n";
            len = 0;
        }
        else if(len+s.size() < 80)
        {
            if(len==0)
            {
                cout<<s;
                len = s.size();
            }
            else
            {
                cout<<" "<<s;
                len += (s.size() + 1);
            }
        }
        else
        {
            len = s.size();
            cout<<"\n"<<s;
        }
    }

    cout<<"\n";
    return 0;
}

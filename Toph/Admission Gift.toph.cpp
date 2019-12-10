//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n, v;
    cin>>n;

    while(n--)
    {
        cin >> v;
        if(v==1)
            cout<<"1\n"<<"1\n";
        else
        {
            if(v%2)
            {
                int m = v/2;
                cout<<m<<"\n"<<"3";
                for(int i=1; i<m; i++)
                    cout<<" 2";
                cout<<"\n";
            }
            else
            {
                int m = v/2;
                cout<<m<<"\n";
                for(int i=0; i<m; i++)
                    cout<<"2 ";
                cout<<"\n";
            }
        }

        string s;
        cin>>s;

        if(s=="Failed..." || s=="Congratulations!")
            break;
    }
    return 0;
}

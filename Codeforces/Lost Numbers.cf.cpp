//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    int a1, a2, a3, a4, a5, a6;
    int r1, r2, r3, r4;

    cout<<"? 1 2\n";
    cin>>r1;

    cout<<"? 1 3\n";
    cin>>r2;

    cout<<"? 4 5\n";
    cin>>r3;

    cout<<"? 4 6\n";
    cin>>r4;

    map<int, int> mp;
    mp[4] = mp[8] = mp[15] = mp[16] = mp[23] = mp[42] = 1;

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        int m = it->first;
       // cout<<m<< " " <<mp[m]<<endl;
        if(r1%m==0)
        {
            if(mp.find(r1/m) != mp.end() && m != r1/m)
            {
                a1 = m;
                a2 = r1/m;
            }
        }

        if(r3%m==0)
        {
            if(mp.find(r3/m) != mp.end() && m != r3/m)
            {
                a4 = m;
                a5 = r3/m;
                //cout<<a4<<" "<<a5<<endl;
            }
        }
    }

    for(auto it = mp.begin(); it!=mp.end(); it++)
    {
        int m = it->first;
        if(r2%m==0)
        {
            if(mp.find(r2/m) != mp.end() && m != r2/m)
            {
                if(a1 != m && a1 != r2/m)
                    swap(a1, a2);

                if(a1 == m)
                    a3 = r2/m;
                else
                    a3 = m;
            }
        }

        if(r4%m==0)
        {
            if(mp.find(r4/m) != mp.end() && m != r4/m)
            {
                if(a4 != m && a4 != r4/m)
                    swap(a4, a5);
                if(a4 == m)
                    a6 = r4/m;
                else
                    a6 = m;
            }
        }
    }

    cout<<"! "<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5<<" "<<a6<<"\n";
    return 0;
}

//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

struct data
{
    string name;
    int atk, def;
}obj[11];

bool compare( data a, data b )
{
    if( a.atk == b.atk ) {
        if( a.def == b.def ) {
              return a.name < b.name ;
        }else return a.def < b.def;
    }else return a.atk > b.atk;
}

int main()
{
    int t,ca,n,m;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        for(int i=0; i<10; i++)
        {
            cin>>obj[i].name>>obj[i].atk>>obj[i].def;
        }
        sort(obj,obj+10,compare);

        vector<string>atkn, defn;

        for(int i=0; i<5; i++) atkn.push_back(obj[i].name);
        for(int i=5; i<10; i++) defn.push_back(obj[i].name);

        printf("Case %d:\n",ca);

        sort(atkn.begin(),atkn.end());
        for(int i=0; i<5; i++)
        {
            if(i==0) cout<<"("<<atkn[i]<<", ";
            else if(i==4) cout<<atkn[i]<<")\n";
            else cout<<atkn[i]<<", ";
        }

        sort(defn.begin(),defn.end());
        for(int i=0; i<5; i++)
        {
            if(i==0) cout<<"("<<defn[i]<<", ";
            else if(i==4) cout<<defn[i]<<")\n";
            else cout<<defn[i]<<", ";
        }
    }
    return 0;
}



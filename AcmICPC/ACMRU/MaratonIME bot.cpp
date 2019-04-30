//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);

    if(s[s.size()-1]=='?') cout<<7<<endl;
    else{
        int p=0;
        s.resize(s.size()-1);

        stringstream ss(s);
        while(ss>>s) if(s=="Sussu") p=1;

        if(p) cout<<"AI SUSSU!"<<endl;
        else cout<<"O cara é bom!"<<endl;
    }
}





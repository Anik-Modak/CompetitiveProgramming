#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    string s;
    cin>>n>>m;
    cin>>s;
    while(m--){
        string str,a=s;
        cin>>str;

        int val,c=0;
        while((val = a.find(str))!=-1)
        {
            a.erase(val,str.size());
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}




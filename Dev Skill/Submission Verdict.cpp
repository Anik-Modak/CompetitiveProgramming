#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string a;

    while(t--){
        cin>>a;
        if(a=="ac") cout<<"Accepted"<<endl;
        else if(a=="wa") cout<<"Wrong Answer"<<endl;
        else if(a=="rte")cout<<"Run Time Error"<<endl;
        else cout<<"Time Limit Exceeded"<<endl;
    }
}

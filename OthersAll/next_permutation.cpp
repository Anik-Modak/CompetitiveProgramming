#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,s;
    while(cin>>a){
        //s="0";
        s=a;
        cout<<s<<endl;
        while(next_permutation(s.begin(), s.end()))cout<<s<<endl;
       // long long l=bitset<32>(s).to_ulong();
        cout<<s<<endl;
    }
    return 0;
}


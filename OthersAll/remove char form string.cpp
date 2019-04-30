#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin>>a>>b;

    a.erase(remove(a.begin(), a.end(), '0'), a.end());
    b.erase(remove(b.begin(), b.end(), '0'), b.end());

    cout<<a<<" "<<b<<endl;
    return 0;
}



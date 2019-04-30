//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

/*string substr (size_t pos, size_t len) const;
Parameters:
pos: Position of the first character to be copied.
len: Length of the sub-string.
size_t: It is an unsigned integral type.
Return value: It returns a string object.*/

int main()
{
    string s;
    cin>>s;

    int n = s.size();
    for (int i = 0; i < n; i++)
        for (int len = 1; len <= n - i; len++)
            cout << s.substr(i, len) << endl;

    string r = s.substr(1, 3);
    cout<<r<<endl;
}


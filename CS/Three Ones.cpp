//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();

    string s;
    cin>>s;
    vector<int>pos;

    for (int i = 0; i < 3; i++) pos.push_back(-1);
    for (int i = 0; i < n; i++) if (s[i] == '1') pos.push_back(i);
    for (int i = 0; i < 3; i++) pos.push_back(n);

    int ans = -1;
    for (int i = 3; i < pos.size(); i++)
    {
        ans = max(ans, pos[i] - pos[i - 3]);
    }
    cout << ans << endl;
}



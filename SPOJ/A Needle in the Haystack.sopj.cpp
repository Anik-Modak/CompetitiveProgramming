//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int, int>
#define MAX 190
using namespace std;

int main()
{
    int n;
    ios_base::sync_with_stdio(false);

    while(cin>>n)
    {
        string s, b;
        cin>>b>>s;

        int it = s.find(b,0);
        if(it==-1)
            cout<<endl;
        while(it != -1)
        {
            cout<<it<<endl;
            it = s.find(b,it+1);
        }
    }
    return 0;
}

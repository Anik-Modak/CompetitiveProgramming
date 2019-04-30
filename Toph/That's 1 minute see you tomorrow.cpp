//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int a, b=n, cnt=0;
    while(n--)
    {
        cin>>a;
        if(a>=m) cnt++;
    }
    if(m*cnt==60 && b==cnt) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int b, g;
    while(cin>>b>>g)
    {
        if(b==-1 && g==-1)
            break;

        if(g==0 || b==0)
            cout<<max(g,b)<<"\n";
        else if(abs(g-b)<=1)
            cout<<"1\n";
        else
        {
            if(b<g)
                swap(b,g);

            int ans = b/(g+1);
            if(b%(g+1)) ans++;
            cout<<ans<<"\n";
        }
    }
    return 0;
}

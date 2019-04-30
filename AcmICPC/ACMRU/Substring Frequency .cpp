#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        string a,b;
        getchar();
        getline(cin,a);
        getchar();
        getline(cin,b);
        int val,c=0;
        while((val=a.find(b))!=-1)
        {
            a.erase(val,1);
            c++;
        }
        printf("Case %d: %d\n",i,c);
    }
}

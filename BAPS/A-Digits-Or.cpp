#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


map<int, int> mp;
int a[100];

void digit (int n)
{
    while(n > 0)
    {
        mp[n % 10]++;
        n /= 10;
    }
}
void fn()
{
    int n=100;
    for(int j =1; j <=n; j++)
    {
        int mx=0,id=0;

        for(int i = 1; i <= j; i++)
        {
            digit(i);
        }
        for(int i = 1; i <= 9; i++)
        {
            if(mp[i]>=mx){
                mx=mp[i];
                id=i;
            }
        }
        mp.clear();
        a[j]=id;
    }
}

int main()
{
    string s;
    cin>>s;
    fn();
    int ans=10;
    for(int i=0; i<s.size()-1; i++)
    {
        char str[3];
        str[0]=s[i];
        str[1]=s[i+1];
        int n=atoi(str);
        if(n) ans=min(ans,a[n]);
    }
    cout<<ans<<endl;
    return 0;
}


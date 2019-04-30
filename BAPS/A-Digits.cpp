#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


map<int, int> mp;

void digit (int n)
{
    while(n > 0)
    {
        mp[n % 10]++;
        n /= 10;
    }
}

int main()
{
    int n;
    cin >> n;

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
        cout<<j<<" "<<id<<endl;
    }
    return 0;

}

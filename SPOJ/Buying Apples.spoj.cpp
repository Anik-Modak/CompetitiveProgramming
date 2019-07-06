//Anik_Modak
#include<bits/stdc++.h>
#define MX 105
using namespace std;

int n, k, arr[MX];
int solve(int id, int sum)
{
    if(sum == 0)
        return 0;

    if(arr[pos]==-1)
        return solve(id+1, sum);

    int mn ;
    for(int i=0; i<k; i++)
    {
        if(id*i >= sum)
            mn = arr[i] + solve(id+1, sum-id*i)
        else
            break;
    }
    return min(p1, p2);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        int ans = solve(0, 0);
    }
}

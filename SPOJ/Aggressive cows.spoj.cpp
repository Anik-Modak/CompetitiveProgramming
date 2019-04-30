//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100005];
int n, c;

bool whetherpossible(int dist)
{
    int i,cows_placed = 1;
    long long lastpos=arr[0];

    for(i=1; i<n; i++)
    {
        if(arr[i]-lastpos>=dist)
        {
            lastpos = arr[i];
            cows_placed++;
            if(cows_placed==c)
                return true;
        }
    }
    return false;
}

int BinarySearch()
{
    int mid, start=0, end=arr[n-1]-arr[0];
    while(start<end)
    {
        mid = (start+end)/2;
        if(whetherpossible(mid))
            start = mid + 1;
        else
            end = mid;
    }
    return start-1;
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        cin>>n>>c;
        for(int i=0; i<n; i++)
            cin>>arr[i];

        sort(arr,arr+n);
        int ans = BinarySearch();
        cout<<ans<<endl;
    }
    return 0;
}

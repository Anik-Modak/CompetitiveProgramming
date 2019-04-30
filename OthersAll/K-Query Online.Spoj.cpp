//Anik_Modak
#include<bits/stdc++.h>
using namespace std ;

int arr[30005];
vector<int>v[120005];

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void build(int low, int high, int pos)
{
    if(low == high)
    {
        v[pos].push_back(arr[low]) ;
        return  ;
    }
    int mid = (low + high) / 2;

    build(low, mid, 2*pos+1);
    build(mid+1, high, 2*pos+2);

    merge(v[2*pos+1].begin(), v[2*pos+1].end(), v[2*pos+2].begin(), v[2*pos+2].end(), back_inserter(v[pos]))  ;
}

int query(int i, int j, int low, int high, int pos, int value)
{
    if(j < low || i > high) return 0;

    if(i <= low && high <= j)
        return v[pos].size() - (upper_bound(v[pos].begin(), v[pos].end(), value) - v[pos].begin()) ;

    int mid = (low + high) / 2  ;

    int s1 = query(i, j, low, mid, 2*pos+1, value);
    int s2 = query(i, j, mid+1, high, 2*pos+2, value);
    return s1+s2;
}

int main()
{
    faster();
    int N, Q, ans = 0;
    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> arr[i];
    build(0, N-1, 0);

    cin >> Q;
    while(Q--)
    {
        int a, b, c;
        cin >> a >> b >> c ;

        a ^= ans;
        b ^= ans;
        c ^= ans;

        ans = query(a-1, b-1, 0, N-1, 0, c);
        cout << ans << endl ;
    }
    return 0;
}

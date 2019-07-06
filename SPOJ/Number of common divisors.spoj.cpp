//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

vector<int>v;
void divisor(int n, int m)
{
    for(int i=1; i*i<=n && i<=m; i++)
    {
        if(i*i==n)
            v.push_back(i);
        else if(n%i==0)
        {
            v.push_back(i);
            if(n/i<=m)
                v.push_back(n/i);
        }
    }
}

int solve(int n)
{
    int cnt = 0;
    for(int i=0; i<v.size(); i++)
    {
        if(n%v[i]==0)
            cnt++;
    }
    v.clear();
    return cnt;
}

int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int a, b, g;
        scanf("%d%d",&a,&b);

        if(a>b)
            swap(a,b);
        g = __gcd(a,b);
        divisor(a, g);
        printf("%d\n",solve(b));
    }
    return 0;
}

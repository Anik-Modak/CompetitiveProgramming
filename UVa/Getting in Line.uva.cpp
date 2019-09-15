//Anik_Modak
#include<bits/stdc++.h>
#define pii pair<int, int>
#define eps 0.0000001
#define MX 22
using namespace std;

double mn;
double distance(pii a, pii b)
{
    double tmp = (a.first-b.first)*(a.first-b.first) + (a.second-b.second)*(a.second-b.second);
    return sqrt(tmp)+16.0;
}

double totaldis(vector<pii> v)
{
    double sum = eps;
    for(int i=1; i<v.size(); i++)
        sum += distance(v[i-1], v[i]);
    return sum;
}

vector<pii> ans;
void permutation(vector<pii> a, int l, int r)
{
    if (l == r)
    {
        double tmp =  totaldis(a) ;
        if(tmp < mn)
        {
            mn = tmp;
            ans = a;
        }
    }
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permutation(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    //freopen("Input.txt","r",stdin);
    int n, cas = 0;
    while(scanf("%d",&n) && n)
    {
        vector<pii> v;
        for(int i=0; i<n; i++)
        {
            int x, y;
            scanf("%d%d",&x, &y);
            v.push_back({x,y});
        }

        mn = 100000000000000.0;
        permutation(v, 0, n-1);

        printf("**********************************************************\nNetwork #%d\n",++cas);
        for(int i=1; i<n; i++)
        {
            double tmp = distance(ans[i-1], ans[i]);
            printf("Cable requirement to connect (%d,%d) to (%d,%d) is %.2f feet.\n",ans[i-1].first,ans[i-1].second, ans[i].first,ans[i].second, tmp);
        }

        printf("Number of feet of cable required is %.2f.\n", mn);
        ans.clear();
    }
    return 0;
}


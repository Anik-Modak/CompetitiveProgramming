//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vector<long long>v;
void check()
{
    for(int i=1; i<v.size(); i++)
    {
        if(v[i]==v[i-1])
        {
            v.erase(v.begin()+i);
            i--;
        }
    }
}

int main()
{
    int t, cas = 0;
    scanf("%d",&t);

    while(t--)
    {
        int n, q, x;
        scanf("%d%d",&n,&q);

        long long a, y;
        for(int i=1; i<=n; i++)
        {
            scanf("%lld",&a);
            v.push_back(a);
        }

        printf("Case %d:\n",++cas);
        for(int i=1; i<=q; i++)
        {
            scanf("%d%lld",&x,&y);
            v[x] = y;
            if(i==1)
                check();
            else
            {
                if(x>0 && v[x]==v[x-1] && x<v.size()-1 && v[x]==v[x+1])
                {
                    v.erase(v.begin()+x);
                    v.erase(v.begin()+x);
                }
                else if(x>0 && v[x]==v[x-1])
                    v.erase(v.begin()+x);
                else if(x<v.size()-1 && v[x]==v[x+1])
                    v.erase(v.begin()+x);
            }
            printf("%d\n",v.size());
        }
        v.clear();
    }
    return 0;
}

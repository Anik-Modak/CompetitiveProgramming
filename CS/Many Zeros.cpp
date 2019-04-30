//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

long long x,ans=0;

void solve(long long n)
{
    long long r,s=-1;
    while(n!=0)
    {
        r=n%10;
        n=n/10;

        if(r==0 && s==-1){
            ans++;
            continue;
        }
        else if(s==-1) s=(10-r);
        else s=(9-r);

        if(s<=x){
            x-=s;
            ans++;
        }
        else return;
    }
}
int main()
{
    long long n;
    cin>>n>>x;

    solve(n);
    ans+=x/9;

    cout<<ans<<endl;
}


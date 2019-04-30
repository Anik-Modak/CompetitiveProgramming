#include<bits/stdc++.h>
#define ll long long
using namespace std;

int l=0,r=0;
void fn(int l0,int r0,int k0,int k1,int v0,int ans)
{
    if((ans^v0)%2==1)  l0=l+(ans^(l+r)^l)%k0;
    else l0=l;

    r0=r+(ans^(r+l)^r)%k1;

    if(l0==l&&r0==r) l0++;

    if(l0>r0) swap(l0,r0);

    l=l0,r=r0;
}

int main()
{
    int n,q;
    cin>>n>>q;

    long long a[n+1],ans;
    for(int i=1; i<=n; i++) cin>>a[i];

    int l0,r0,k0,k1,v0;
    cin>>l0>>r0>>k0>>k1>>v0;

    while(q--)
    {
        if(l==0&&r==0){
            l=l0,r=r0;
        }
        else fn(l0,r0,k0,k1,v0,ans);

        if(l>n||r>n) break;
        else{
            ans=__gcd(a[l],a[r]);
            cout<<ans<<endl;
        }
    }
}

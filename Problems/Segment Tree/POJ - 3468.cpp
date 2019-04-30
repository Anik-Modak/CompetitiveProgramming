#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define check(X,N) (bool)(X & (1<<N))
#define set1(X,N) X=X|(1<<N);
#define reset(X,N) (X & (~(1<<N)))
#define toggle(X,N) (X ^ (1<<N))
#define MS1(X) memset(X,-1,sizeof X);
#define MS0(X) memset(X,0,sizeof X);
#define c1(X) cout<<X<<endl;
#define c2(X,Y) cout<<X<<" "<<Y<<endl;
#define c3(X,Y,Z) cout<<X<<" "<<Y<<" "<<Z<<endl;

ll p,q,arr[400005],lazy[400005],u;
ll inp[100005];

void creat(int lw,int hi,int pos)
{
    if(lw==hi){
        arr[pos] = inp[lw];
        return ;
    }
    int mid = (hi+lw)/2;
    creat(lw,mid,pos*2);
    creat(mid+1,hi,pos*2+1);
    arr[pos] += arr[pos*2] + arr[pos*2+1];
    return;
}

void propagate(ll at1,ll L,ll R)
{
    ll mid=(L+R)/2;
    lazy[2*at1]+=lazy[at1];
    lazy[2*at1+1]+=lazy[at1];
    arr[2*at1]+=(mid+1-L)*lazy[at1];
    arr[2*at1+1]+=(R-mid)*lazy[at1];
    lazy[at1]=0;
    return;
}

void update(ll at1,ll L,ll R)
{
    ll mid=(L+R)/2;
    if(L>q || R<p)return;
    else if(L>=p && R<=q){
        arr[at1]+=(R+1-L)*u;
        lazy[at1]+=u;
        return;
    }
    else{
        if(lazy[at1])propagate(at1,L,R);
        update(2*at1,L,mid);
        update(2*at1+1,mid+1,R);
        arr[at1]=arr[2*at1]+arr[2*at1+1];
        return;
    }
}

ll query(ll at1,ll L,ll R)
{
    ll mid=(L+R)/2;
    if(L>q || R<p)return 0;
    else if(L>=p && R<=q)return arr[at1];
    else{
        if(lazy[at1])propagate(at1,L,R);
        return query(2*at1,L,mid)+query(2*at1+1,mid+1,R);
    }
}

int main(void)
{
    freopen("POJ - 3468.txt","r",stdin);
    ll tes,cn=0,N,w;
    char a;

        scanf("%lld %lld",&N,&w);
        for(int i=0;i<N;i++)scanf("%lld",&inp[i]);
        creat(0,N-1,1);
        for(ll i=0;i<w;i++){
            scanf(" %c",&a);
            if(a=='C'){
                scanf("%lld %lld %lld",&p,&q,&u);
                p--;
                q--;
                update(1,0,N-1);
            }
            else{
                scanf("%lld %lld",&p,&q);
                p--;
                q--;
                printf("%lld\n",query(1,0,N-1));
            }
        }
        MS0(lazy)
        MS0(arr)
    return 0;
}

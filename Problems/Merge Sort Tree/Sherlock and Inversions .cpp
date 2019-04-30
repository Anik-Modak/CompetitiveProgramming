#include <bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define rep(i,n) for(i=1;i<=n;i++)
#define FO freopen("t.txt","w",stdout);
#define MS(XX,YY) memset(XX,YY,sizeof(XX));
#define pii pair<int,int>
#define chk(n,i) (bool)(n&(1<<i))
#define on(n,i) (n|(1<<i))
#define off(n,i) n=n&(~(1<<i))
#define eps 10e-7
#define MX 2000005
using namespace std;

int ara[MX];
vector<int>vc[MX*4];

int mergee(int x,int y,int z){ /// merging 2 vector x and y to Z in sorted order
    int i,j,k,md,sz,cnt=0;
    sz = vc[x].size() + vc[y].size();
    for(i=0,j=0,k=0;k<sz;k++){
        if(i>=vc[x].size()) vc[z].push_back(vc[y][j++]);
        else if(j>=vc[y].size()) vc[z].push_back(vc[x][i++]);
        else if(vc[x][i]<vc[y][j]) vc[z].push_back(vc[x][i++]);
        else{
            cnt++;
            vc[z].push_back(vc[y][j++]);
        }
    }
    return cnt;
}

/// [low,high]  total range :: variable range
/// [qlow,qhigh] query range
/// pos = current position

void creat(int low,int high,int pos){ /// creating merge sort tree
    if(low==high){
        vc[pos].push_back(ara[low]);
        return ;
    }
    int mid = (low+high)/2;
    creat(low,mid,pos*2);
    creat(mid+1,high,pos*2+1);
    vc[pos].push_back(0);
    vc[pos][0] = mergee(pos*2,pos*2+1,pos);
}

int query(int low,int high,int qlow,int qhigh,int pos){
    if(qlow>qhigh) return 0;
    if(qlow>high||qhigh<low) return 0;
    if(qlow<=low&&qhigh>=high){
        return vc[pos][0];
    }
    int mid = (low + high)/2;
    return query(low,mid,qlow,qhigh,pos*2) + query(mid+1,high,qlow,qhigh,pos*2+1);
}


int main()
{
    ll i,j,a,b,ts,cn=0,cas=0,n,m,x,y,sum=0,mn=INT_MAX,mx=0;
    freopen("sherlok.txt","r",stdin);
    cin>>n>>m;
    for(i=1;i<=n;i++){
        scanf("%lld",&ara[i]);
    }
    creat(1,n,1);
    for(i=1;i<=m;i++){
        scanf("%lld %lld",&a,&b);
        printf("%d\n",query(1,n,a,b,1));
    }
    return 0;
}

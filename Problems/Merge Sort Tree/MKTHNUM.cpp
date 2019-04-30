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
#define MX 100005
using namespace std;

int ara[MX];
vector<int>vc[MX*4];
vector<pii>in;

void mergee(int x,int y,int z){ /// merging 2 vector x and y to Z in sorted order
    int i,j,k,md,sz;
    sz = vc[x].size() + vc[y].size();
    for(i=0,j=0,k=0;k<sz;k++){
        if(i>=vc[x].size()) vc[z].push_back(vc[y][j++]);
        else if(j>=vc[y].size()) vc[z].push_back(vc[x][i++]);
        else if(vc[x][i]<vc[y][j]) vc[z].push_back(vc[x][i++]);
        else vc[z].push_back(vc[y][j++]);
    }
}

/// [low,high]  total range :: variable range
/// [qlow,qhigh] query range
/// pos = current position

void creat(int low,int high,int pos){ /// creating merge sort tree
    if(low==high){
        vc[pos].push_back(in[low-1].second); // in is 0 based
        return ;
    }
    int mid = (low+high)/2;
    creat(low,mid,pos*2);
    creat(mid+1,high,pos*2+1);
    mergee(pos*2,pos*2+1,pos);
}

/* calculating total number in left range lower than the given index
*  if numbers are greater than equals to the searging value than look into left
*  searhing on right sub array and substracting left sub arrys given up values*/

int query(int low,int high,int qlow,int qhigh,int pos,int val)
{
    if(low==high) return vc[pos][0];
    int mid = (low+high)>>1,left=pos<<1;

    int total = upper_bound(vc[left].begin(),vc[left].end(),qhigh)
    - lower_bound(vc[left].begin(),vc[left].end(),qlow);

    if(total>=val){
        return query(low,mid,qlow,qhigh,pos*2,val);
    }
    else{
        return query(mid+1,high,qlow,qhigh,pos*2+1,val-total);
    }
}

int main()
{
    ll i,j,a,b,ts,cn=0,cas=0,n,m,x,y,sum=0,mn=INT_MAX,mx=0;
   // freopen("MKTHNUM.txt","r",stdin);
    cin>>n>>m;
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
        in.push_back(pii(ara[i],i));
    }
    sort(in.begin(),in.end());

    creat(1,n,1);

    for(i=1;i<=m;i++){
        scanf("%d %d %d",&a,&b,&x);
        y = query(1,n,a,b,1,x);
        printf("%d\n",ara[y]);
    }
    return 0;
}

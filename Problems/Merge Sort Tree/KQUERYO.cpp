#include<bits/stdc++.h>
#define MX 30005
using namespace std;

int ara[MX];
vector<int>vc[MX*4];
/// 1 based index

int bns(int n,int val){
    /// lower bound 1 2 2 2 3 4
    /// then returns 2
    int mid,i,j,low=0,high = vc[n].size()-1;
    while((high-low)>4){
        mid = (low+high)/2;
        if(vc[n][mid]<=val) low = mid;
        else high = mid - 1;
    }
    for(low;low<=high&&low<vc[n].size();low++){
        if(vc[n][low]>val) break;
    }
    return vc[n].size()-low; /// numbers greater than value
}

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
        vc[pos].push_back(ara[low]);
        return ;
    }
    int mid = (low+high)/2;
    creat(low,mid,pos*2);
    creat(mid+1,high,pos*2+1);
    mergee(pos*2,pos*2+1,pos);
}

int query(int low,int high,int qlow,int qhigh,int pos,int val){
    if(qlow>qhigh) return 0;
    if(qlow>high||qhigh<low) return 0;
    if(qlow<=low&&qhigh>=high){
        return bns(pos,val);
    }
    int mid = (low + high)/2;
    return query(low,mid,qlow,qhigh,pos*2,val) + query(mid+1,high,qlow,qhigh,pos*2+1,val);
}


int main(){

    int i,j,k,n,m,a,b,c,x=0;
    //freopen("KQUERYO.txt","r",stdin);
    cin>>n;
    for(i=1;i<=n;i++){
        scanf("%d",&ara[i]);
    }
    creat(1,n,1);
    cin>>m;
    for(i=1;i<=m;i++){
        scanf("%d %d %d",&a,&b,&c);
        x = query(1,n,a^x,b^x,1,c^x);
        printf("%d\n",x);
    }
    return 0;
}


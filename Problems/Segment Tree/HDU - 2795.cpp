#include<iostream>
#include<cstdio>
#include<algorithm>
#define MX 200005
using namespace std;

int seg[4*MX],lazy[4*MX],p[4*MX],h,w;

void creat(int lw,int hi,int pos)
{
    if(lw==hi){
        seg[pos] = w;
        p[pos] = lw;
        //cout<<pos<<" - "<<lw<<endl;
        return ;
    }
    int mid = (hi+lw)/2;
    creat(lw,mid,pos*2+1);
    creat(mid+1,hi,pos*2+2);
    seg[pos] = max(seg[pos*2+1] , seg[pos*2+2]);
}

int poss(int low,int high,int pos,int val){
    if(low==high) return p[pos];
    int mid = (low+high)/2;
    if(seg[pos*2+1]>=val){
        return poss(low,mid,pos*2+1,val);
    }
    else return poss(mid+1 ,high,pos*2+2,val);
}

void update(int low,int high,int ulow,int uhigh,int val,int pos)
{
    if(low>high) return ;

    if(ulow>high||uhigh<low) return;

    if(ulow<=low&&uhigh>=high){
        seg[pos] -= val;
        return;
    }

    int mid = (high+low)/2;

    update(low,mid,ulow,uhigh,val,pos*2+1);
    update(mid+1,high,ulow,uhigh,val,pos*2+2);

    seg[pos] = max(seg[pos*2+1],seg[pos*2+2]);
}

int main(){
    int ts,cas=0,i,j,k,x,y,a,b,n;
    freopen("HDU - 2795.txt","r",stdin);
    while(scanf("%d %d %d",&h,&w,&n)==3){
        //cout<<n-1<<endl;
        k = min(h,n)-1;
        creat(0,k,0);
        for(i=1;i<=n;i++){
            scanf("%d",&a);
            if(seg[0]<a){
                puts("-1");
                continue;
            }
            x = poss(0,k,0,a);
            update(0,k,x,x,a,0);
            printf("%d\n",x+1);
        }
    }
    return 0;
}

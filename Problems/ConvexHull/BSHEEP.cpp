#include<bits/stdc++.h>
#define ll long long
#define P(X) cout<<"db "<<X<<endl;
#define P2(X,Y) cout<<"db2 "<<X<<" "<<Y<<endl;
#define MX 100005
#define PI 3.14159265358979323846
using namespace std;


struct point{
    ll x,y,id;
}convex_points[MX],ara[MX];;

point pivot;

ll dist(point p1,point p2){
    return ((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}

int orientation(point p,point q,point r){
    ll val = ((q.y-p.y)*(r.x-q.x) - (r.y-q.y)*(q.x-p.x));
    if(val==0) return 0;
    if(val>0) return 1;
    return 2;
}

bool cmp(point p1,point p2){
    ll o = orientation(pivot,p1,p2);
    if(o==0){
        return dist(pivot,p1) < dist(pivot,p2);
    }
    return (o==2);
}


inline point nextToTop(stack<point>&st){
    point p,res;
    p = st.top();
    st.pop();
    res = st.top();
    st.push(p);
    return res;
}

int total;

void convexHull(int n){
    ll i,pos=0,in=0,miny = ara[0].y,minx = ara[0].x;
    stack<point>st;
    for(i=0;i<n;i++){
        if((miny==ara[i].y&&minx>ara[i].x)||miny>ara[i].y){
            minx = ara[i].x;
            miny = ara[i].y;
            pos = i;
        }
    }
    swap(ara[0],ara[pos]);
    pivot = ara[0];
    sort(ara+1,ara+n,cmp);
    for(i=1;i<n;i++){
        while(i<n-1&&orientation(pivot,ara[i],ara[i+1])==0){
            i++;
        }
        ara[++in] = ara[i];
    }
   // P2("ddddddddddddddddddddddddddddddddddddddddddd",in)
    if(in==0){
        printf("0.00\n");
        printf("1\n");
    }
    else if(in==1){
        printf("%0.2f\n",2.0*(double)sqrt(dist(ara[0],ara[1])));
        printf("%lld %lld\n",ara[0].id,ara[1].id);
    }

    st.push(ara[0]);
    st.push(ara[1]);
    st.push(ara[2]);
    for(i=3;i<=in;i++){
        while(orientation(nextToTop(st),st.top(),ara[i])!=2){
            st.pop();
        }
        st.push(ara[i]);
    }

    in = total = st.size();
    point tmp;
    while(!st.empty()){
        tmp = st.top();
        st.pop();
        convex_points[--in] = tmp;
    }
    double ans = 0.0;
    convex_points[total] = convex_points[0];
    for(i=0;i<total-1;i++){
        ans += sqrt(dist(convex_points[i],convex_points[i+1]));
    }
    printf("%0.2f\n",ans);
    for(int i=0;i<total;i++){
        if(i==total)printf("%lld\n",convex_points[i].id);
        else printf("%lld ",convex_points[i].id);
    }
}

int main(){
    ll x,y,z,i,j,n,m,ts,cas=0;
    freopen("BSHEEP.txt","r",stdin);
    cin>>ts;
    while(++cas<=ts){
        scanf("%lld",&n);
        for(i=0;i<n;i++){
            scanf("%lld %lld",&ara[i].x,&ara[i].y);
            ara[i].id = i+1;
        }
        printf("\n");
//        P(n)
//        P2(cas,"ddddddddddddddd")
        convexHull(n);
        memset(ara,0,sizeof ara);
    }
    return 0;
}



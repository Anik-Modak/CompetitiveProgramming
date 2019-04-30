//Anik_Modak
#include<bits/stdc++.h>
#define IN freopen("input.txt","r",stdin);
#define MX 1005
#define ll long long
using namespace std;

struct point
{
    ll x,y;
} pnts[MX],ara[MX];;

point pivot;

ll dist(point p1,point p2)
{
    return ((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}

int orientation(point p,point q,point r)
{
    ll val = ((q.y-p.y)*(r.x-q.x) - (r.y-q.y)*(q.x-p.x));
    if(val==0)
        return 0;
    if(val>0)
        return 1;
    return 2;
}

bool cmp(point p1,point p2)
{
    ll o = orientation(pivot,p1,p2);
    if(o==0)
        return dist(pivot,p1) < dist(pivot,p2);
    return (o==2);
}

inline point nextToTop(stack<point>&st)
{
    point p,res;
    p = st.top();
    st.pop();
    res = st.top();
    st.push(p);
    return res;
}

int total;

bool convexHull(int n)
{
    stack<point>st;
    int mn=0, in=0;

    for(int i=1; i<n; i++)
    {
        if(ara[i].y < ara[mn].y) mn = i;
        else if(ara[i].y==ara[mn].y && ara[i].x < ara[mn].x) mn=i;
    }

    swap(ara[0],ara[mn]);
    pivot = ara[0];
    sort(ara+1,ara+n,cmp);

    for(int i=1; i<n; i++)
    {
        while(i<n-1&&orientation(pivot,ara[i],ara[i+1])==0)
        {
            i++;
            //return 1;
        }
        ara[++in] = ara[i];
    }

    if(in<2)
        return 0;

    st.push(ara[0]);
    st.push(ara[1]);
    st.push(ara[2]);

    for(int i=3; i<=in; i++)
    {
        while(orientation(nextToTop(st),st.top(),ara[i])!=2)
        {
            st.pop();
            return 1;
        }
        st.push(ara[i]);
    }
    return 0;
}

int main()
{
    IN
    int n;
    while(cin>>n && n)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%lld %lld",&ara[i].x,&ara[i].y);
        }
        if(convexHull(n))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}


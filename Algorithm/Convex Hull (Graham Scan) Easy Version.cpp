//Anik_Modak
#include<bits/stdc++.h>
#define ll long long
#define MX 100005
using namespace std;

struct Point
{
    ll x, y;
} pnts[MX];

Point p0;
ll dist(Point p1, Point p2)
{
    return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}

int orientation(Point p, Point q, Point r)
{
    ll val = (q.y-p.y)*(r.x-q.x)-(r.y-q.y)*(q.x-p.x);
    if(val > 0)
        return 1;
    if(val < 0)
        return 2;
    return 0;
}

bool cmp(Point p1, Point p2)
{
    int ore = orientation(p0,p1,p2);
    if(ore == 0)
        return dist(p0,p1)<dist(p0,p2);
    return (ore == 2);
}

Point Stk[MX];
int id = 0;

void convexHull(int n)
{
    int mn = 0, in=0;
    for(int i=1; i<n; i++)
    {
        if(pnts[i].y < pnts[mn].y)
            mn = i;
        else if(pnts[i].y==pnts[mn].y && pnts[i].x < pnts[mn].x)
            mn=i;
    }

    swap(pnts[mn],pnts[0]);
    p0=pnts[0];
    sort(pnts+1,pnts+n,cmp);

    for(int i=1; i<n; i++)
    {
        while(i<n-1 && orientation(p0,pnts[i],pnts[i+1])==0)
            i++;
        pnts[++in]=pnts[i];
    }

    if(in<2)
        return;
    for(int i=0; i<in; i++)
    {
        if(i<3)
        {
            Stk[++id]=pnts[i];
            continue;
        }
        while(orientation(Stk[id-1],Stk[id],pnts[i])!=2)
            id--;
        Stk[++id]=pnts[i];
    }
}

int main()
{
    int n=0, mrk=-1;
    char ch;
    while(cin>>pnts[n].x>>ch>>pnts[n].y)
        n++;

    int convexHull(n);
    for(int i=0; i<n && mrk==-1; i++)
    {
        for(int j=0; j<id; j++)
            if(Stk[j].x==pnts[i].x && Stk[j].y == pnts[i].y)
            {
                mrk = j;
                break;
            }
    }

    for(int i=mrk; i<id; i++)
        cout<<Stk[i].x<<" "<<Stk[i].y<<endl;

    for(int i=0; i<=mrk; i++)
        cout<<Stk[i].x<<" "<<Stk[i].y<<endl;
}

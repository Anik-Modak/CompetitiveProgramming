//Anik_Modak
#include<bits/stdc++.h>
#define MAX 10005
#define x second
#define y first

using namespace std;
typedef pair<int,int >point;

struct event
{
    point p1,p2;
    int type;
    event() {};
    event(point p1,point p2, int type) : p1(p1), p2(p2),type(type) {};
} events[MAX];

bool compare(event a, event b)
{
    return a.p1.x<b.p1.x;
}

set<point >s;

void intersection(int e)
{
    for(int i=0; i<e; ++i)
    {
        event c = events[i];
        if (c.type==0)
            s.insert(c.p1);
        else if (c.type==1)
            s.erase(c.p2);
        else
        {
            set<point> ::iterator it;
            for(it=s.lower_bound(make_pair(c.p1.y,-1)); it!=s.end() && it->y<=c.p2.y; it++)
                printf("%d %d\n", events[i].p1.x, it->y);//intersections
        }
    }
}

int main ()
{
    int n, e=0;
    scanf("%d", &n);

    for (int i=0; i<n; ++i)
    {
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1,&x2, &y2);

        if(x1==x2)
        {
            events[e++]=event(make_pair(y1,x1),make_pair(y2,x2),2);
        }
        else
        {
            events[e++]=event(make_pair(y1,x1),make_pair(y2,x2),0);
            events[e++]=event(make_pair(y2,x2),make_pair(y1,x1),1);
        }
    }

    sort(events, events+e,compare);//on x coordinate
    intersection(e);

    return 0;
}

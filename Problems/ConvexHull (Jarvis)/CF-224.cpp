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
#define MX 1000005
using namespace std;

#define ll long long
struct point{
    ll x,y;
}convex_points[MX],points[MX];;

/// global scope decraltion of min-left point of collcetion
point pivot;

///Distance calculation mathod
ll dist(point p1,point p2){
    return ((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}

double distd(point p1,point p2){
    return sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}

/**
*   https://www.geeksforgeeks.org/orientation-3-ordered-points/
*   calculating orientation based on slope (yi-yj)/(xi-xj)
*   by compering slope of p-q and q-r;
*   if p-q<q-r then counter-clockwise
*   @return 0 if colinear
*   @return 1 if clockwise (Right rotetion)
*   @return 2 if counter-clockwise (left rotetion)
*/
int orientation(point p,point q,point r){
    ll val = ((q.y-p.y)*(r.x-q.x) - (r.y-q.y)*(q.x-p.x));
    if(val==0) return 0;
    if(val>0) return 1;
    return 2;
}

/**
*   sorting by polor angle in counterclockwise order around point0.
*   If polor angle of two points is same, then put the nearest point first.
*/
bool cmp(point p1,point p2){
    ll o = orientation(pivot,p1,p2);
    if(o==0){
        return dist(pivot,p1) < dist(pivot,p2);
    }
    return (o==2);
}

/// returning previous value of top element
inline point nextToTop(stack<point>&st){
    point p,res;
    p = st.top();
    st.pop();
    res = st.top();
    st.push(p);
    return res;
}

int total;

/**
*   This function will calculate convexHull points
*   All arrays are in 0 based indexing
*   @param n total numbers of points
*/
double convexHull(int n)
{
	vector<point> hull;
	int l = 0;
	for (int i = 1; i < n; i++)
		if (points[i].x < points[l].x)
			l = i;
	int p = l, q;
	do
	{
		hull.push_back(points[p]);
		q = (p+1)%n;
		for (int i = 0; i < n; i++)
		{
		if (orientation(points[p], points[i], points[q]) == 2)
			q = i;
		}

		p = q;

	} while (p != l);
    double ans = distd(hull[0],hull[hull.size()-1]);
	for (int i = 0; i<hull.size()-1; i++){
        ans += distd(hull[i],hull[i+1]);
        //cout<<hull[i].x<<" "<<hull[i].y<<endl;
	}
	return ans;
}
int main()
{
    ll i,j,a,b,ts,cn=0,cas=0,n,m,x,y,sum=0,mn=INT_MAX,mx=0;
    //freopen("test.txt","r",stdin);
    cin>>n;
    for(i=0;i<n;i++){
        scanf("%lld %lld",&points[i].x,&points[i].y);
    }
    cout<<convexHull(n)<<endl;;
    return 0;
}

#include <bits/stdc++.h>
    #define P(X) cout<<"db "<<X<<endl;
    #define P2(X,Y) cout<<"d2 "<<X<<" "<<Y<<endl;
    #define ll long long
    #define rep(i,n) for(i=1;i<=n;i++)
    #define FO freopen("t.txt","w",stdout);
    #define MS(XX,YY) memset(XX,YY,sizeof(XX));
    #define pii pair<ll,ll>
    using namespace std;
    #define SZ 55
    struct Point
    {
        ll x, y;
    };

    // A globle point needed for sorting points with reference
    // to the first point Used in compare function of qsort()
    Point p0,pnts[SZ];
    int n;//total n points

    // A utility function to find next to top in a stack
    Point stackp[SZ];
    int in=0;
    Point nextToTop()
    {
        return stackp[in-1];
    }
    // A utility function to return square of distance
    // between p1 and p2
    ll distSq(Point p1, Point p2)
    {
        return (p1.x - p2.x)*(p1.x - p2.x) +
            (p1.y - p2.y)*(p1.y - p2.y);
    }

    // To find orientation of ordered triplet (p, q, r).
    // The function returns following values
    // 0 --> p, q and r are colinear
    // 1 --> Clockwise
    // 2 --> Counterclockwise
    int orientation(Point p, Point q, Point r)
    {
        ll val = (q.y - p.y) * (r.x - q.x) -
                (q.x - p.x) * (r.y - q.y);

        if (val == 0) return 0; // colinear
        return (val > 0)? 1: 2; // clock or counterclock wise
    }

    // A function used by library function qsort() to sort an array of
    // points with respect to the first point
    bool cmp(Point p1,Point p2){
        int ore=orientation(p0,p1,p2);
        if(ore==0)return distSq(p0,p1)<distSq(p0,p2);
        return (ore==2);
    }
    int convexHull(){
        //YOU have to create it :D
        // minimum y
        ll minp = 0;
        for(int i = 1; i < n; i++)
        {
            if(pnts[minp].y > pnts[i].y)
                minp = i;
            else if(pnts[minp].y == pnts[i].y)
                if(pnts[minp].x > pnts[i].x)
                    minp = i;
        }
        swap(pnts[0], pnts[minp]);
        p0 = pnts[0];
        sort(pnts + 1, pnts + n, cmp);
        for(int i = 0; i < 3; i++)
        {
            stackp[++in] = pnts[i];
        }

        for(int i = 0; i < n; i++)
        {
            while(orientation(stackp[in-1], stackp[in], stackp[i])==1)
            {
                in--;
                return false;
            }
            stackp[++in] = pnts[i];
        }

        return true;
    }


    int main()
    {
        int i,j,a,b,ts,cn=0;
        //freopen("B.txt","r",stdin);
        while(1){
            scanf("%d",&n);
            if(n == 0)
                return 0;
            for(i=0;i<n;i++){
                scanf("%lld %lld",&pnts[i].x,&pnts[i].y);

            }

            if(convexHull())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
    }
return 0;
}

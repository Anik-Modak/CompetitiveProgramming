//Anik_Modak
#include<bits/stdc++.h>
#define MX 100005
using namespace std;

struct Pt
{
    long long x, y;
};

long long cross(Pt o, Pt a, Pt b)
{
    return (a.x-o.x)*(b.y-o.y)-(a.y-o.y)*(b.x-o.x);
}

bool cmp(Pt a, Pt b)
{
    if(a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

int convexHull(Pt p[], int n, Pt ch[])
{
    sort(p, p+n, cmp);
    int i, m = 0, t;
    for(i = 0; i < n; i++)
    {
        while(m >= 2 && cross(ch[m-2], ch[m-1], p[i]) < 0)
            m--;
        ch[m++] = p[i];
    }
    for(i = n-2, t = m+1; i >= 0; i--)
    {
        while(m >= t && cross(ch[m-2], ch[m-1], p[i]) < 0)
            m--;
        ch[m++] = p[i];
    }
    return m-1;
}

Pt p[MX], ch[MX];

int main()
{
    int t, n;
    char cc;

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%lld %lld %c", &p[j].x, &p[j].y, &cc);
            if(cc == 'Y')
                j++;
        }

        int m = convexHull(p, j, ch);
        printf("%d\n", m);
        for(int i = 0; i < m; i++)
            printf("%lld %lld\n", ch[i].x, ch[i].y);
    }
    return 0;
}

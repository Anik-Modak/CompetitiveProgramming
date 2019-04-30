#include<iostream>
#include<cmath>
#include<cstdio>
#define pi 2*acos(0.0)
using namespace std;

double Area(double x1,double y1,double r1,double x2,double y2,double r2)
{
    double d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    if(d>=r1+r2)
        return 0;
    else if(fabs(r1-r2)>=d)
    {
        if(r1>r2)
            return pi*r2*r2;
        else
            return pi*r1*r2;
    }
    else
    {
        double a1=2*acos((r1*r1+d*d-r2*r2)/2/r1/d);
        double a2=2*acos((r2*r2+d*d-r1*r1)/2/r2/d);
        double ans=r1*r1*a1/2+r2*r2*a2/2-r1*r1*sin(a1)/2-r2*r2*sin(a2)/2;
        return ans;
    }
}

int main()
{
    double x1,y1,r1,x2,y2,r2,area;
    cin>>x1>>y1>>r1>>x2>>y2>>r2;

    area=Area(x1,y1,r1,x2,y2,r2);
    printf("%.3lf\n",area);
}

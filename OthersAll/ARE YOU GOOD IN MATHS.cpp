#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,h,a;
    cin>>t;
    while(t--){
        scanf("%lld%lld",&h,&a);
        double b[3],x,y;
        b[2]=h;
        if(h*h<(4*a))printf("-1\n");
        else{
            x=sqrt(h*h+4*a);
            y=sqrt(h*h-4*a);
            b[0]=(x+y)/2;
            b[1]=(2*a)/b[0];
            sort(b,b+3);
            if(b[0]+b[1]<=b[2]) printf("-1\n");
            else printf("%.6lf %.6lf %.6lf\n",b[0],b[1],b[2]);
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,n,m;
    cin>>x1>>y1>>x2>>y2;
    m=abs(x2-x1);
    n=abs(y2-y1);
    if((n==0&&m==0)||(n!=m&&x1!=x2&&y1!=y2)) printf("-1\n");
    else{
        if(x1==x2){
            x3=x1+n;
            x4=x1+n;
            y3=y1;
            y4=y2;
        }
        else if(y1==y2){
            y3=y1+m;
            y4=y2+m;
            x3=x1;
            x4=x2;
        }
        else{
            x3=x1;
            y3=y2;
            x4=x2;
            y4=y1;
        }
    printf("%d %d %d %d\n",x3,y3,x4,y4);
    }
}

//Anik_Modak
#include<bits/stdc++.h>
using namespace std ;

int main()
{

    double x1 , y1 , r1 , x2 , y2 , r2 , distance ;

    cin >> x1 >> y1 >> r1 >>  x2 >> y2 >> r2 ;

    if(x1==x2 && y1==y2)
    {
        if(r1==r2) cout<<"-1"<<endl;
        else cout<<"0"<<endl;
        return 0;
    }

    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)) ;

    if(r2>r1) swap(r2,r1);

    if(distance==r1+r2|| distance==r1-r2)cout << "1" << endl ;
    else if(distance>r1+r2|| distance+r2<r1 )cout << "0" << endl ;
    else cout << "2" << endl ;

}

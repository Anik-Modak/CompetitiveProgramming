#include<bits/stdc++.h>
using namespace std;
int id=0,in=1;
class c2;
class c1{
    int s;
public:
    void set_status(int s);
    friend int idle(c1,c2);
};
class c2{
    int s;
public:
    void set_status(int s);
    friend int idle(c1,c2);
};
void c1::set_status(int s1)
{
    s=s1;
}
void c2::set_status(int s1)
{
    s=s1;
}
int idle(c1 a,c2 b)
{
    if(a.s||b.s) return 0;
    else return 1;
}
int main()
{
    c1 x; c2 y;
    x.set_status(id);
    y.set_status(id);
    if(idle(x,y)) cout<<"screen can be used"<<endl;
    else  cout<<"In used"<<endl;
    x.set_status(in);
    if(idle(x,y)) cout<<"screen can be used"<<endl;
    else  cout<<"In used"<<endl;
}





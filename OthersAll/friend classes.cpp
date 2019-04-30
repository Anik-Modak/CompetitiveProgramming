#include<iostream>
using namespace std;

class two_values{
public:
    int a;
    int b;
    two_values(int i, int j){
        a=i;
        b=j;
    };
    friend class mn;
};
class mx{
public:
    int mx_f(two_values x){
        return x.a>x.b ? x.a :x.b;
    };
};
int main()
{
    two_values ob(10,20);
    mx m;
    cout<<m.mx_f(ob);
}

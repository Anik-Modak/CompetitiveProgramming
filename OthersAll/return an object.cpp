#include<iostream>
using namespace std;

class c{
    int i;
public:
    c(int n){
        i=n;
    };
    int show(){
        return i;
    };
};

c fn()
{
    c x(678);
    return x;
}

int main()
{
    c ob(3);
    ob=fn();
    cout<<ob.show()<<endl;
}

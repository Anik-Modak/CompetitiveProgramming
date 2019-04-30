#include<iostream>
using namespace std;

int c=0,d=0;

class A{
public:
    A(){ c++;};
    ~A(){ d++;};
};

void fn(){
    A a,b,j;
    cout<<c<<" "<<d<<endl;
}
int main()
{
    A a,b;
    cout<<c<<" "<<d<<endl;
    cout<<c<<" "<<d<<endl;
    fn();
    cout<<c<<" "<<d<<endl;
}

#include<iostream>
using namespace std;

template<class t>class myc{
    t x;
public:
    myc(t a){
        x=a;
    }
    t getx(){
        return x;
    }
};

int main()
{
    myc<double>d(10.5);
    cout<<" "<<d.getx()<<endl;
}

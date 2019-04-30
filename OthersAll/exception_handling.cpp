#include<iostream>
using namespace std;

void x(int t)
{
    try{
        if(t) throw t;
        else throw 'a';
    }catch(int i){
        cout<<"Caught: "<<i<<endl;
    }catch(...){
        cout<<"value is zero"<<endl;
    };
}

int main()
{
    x(1);
    x(2);
    x(0);
    x(4);
    cout<<"End"<<endl;
}

#include<iostream>
using namespace std;

template<class t1,class t2>void f(t1 x,t2 y)
{
    cout<<x<<" "<<y<<endl;
}

int main()
{
    int a;
    double d;
    string s;
    cin>>a>>s>>d;
    f(a,s);
    f(d,s);
}

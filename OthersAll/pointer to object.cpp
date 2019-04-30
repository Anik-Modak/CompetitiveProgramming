#include<iostream>
using namespace std;

class c1{

public:
    int i,j;
    c1(int n, int m){
        i=n;
        j=m;
    };
};
int main()
{
    c1 ob(100000,200000);
    int *p;
    p=&ob.i;
    p++;
    p=&ob.j;
    for(int i=0;i<2;i++)
    {
        cout<<*p<<endl;
        p--;
    }
}

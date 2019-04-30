#include<iostream>
using namespace std;

class static_type{
    static int i;
public:
    static void init(int x){
        i=x;
    };
    void show(){
        cout<<i<<endl;
    };
};
int static_type:: i;

int main()
{
    static_type:: init(100);
    static_type x,y;
    x.show();
    static_type:: init(200);
    y.show();
    x.show();
}

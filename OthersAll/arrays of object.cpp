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

int main()
{
    c ob[3]={10,20,30};
    for(int i=0; i<3; i++)
        cout<<ob[i].show()<<endl;
}


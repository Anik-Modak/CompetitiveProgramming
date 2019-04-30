#include<iostream>
#include<cstring>
using namespace std;

class mystr{
    char str[100];
public:
    mystr(){
        cout<<"constructor"<<endl;
    };
    void build(char *s){
        strcat(str,s);
    };
    void show(){
        cout<<str<<endl;
    };
};
int main()
{
    mystr s;
    s.build("Hello ");
    s.build("Anik");
    s.show();
}

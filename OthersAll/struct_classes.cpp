#include<bits/stdc++.h>
using namespace std;
struct mystr{
    void show();
    void creat(char *s);


private:
    char str[20];
};
void mystr::creat(char *s)
{
  strcat(str,s);
}
void mystr::show()
{
    cout<<str<<endl;
}
int main()
{
    mystr m;
    m.creat("Hello ");
    m.creat("structure");
    m.show();
}

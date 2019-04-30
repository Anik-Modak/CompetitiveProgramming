#include<iostream>
using namespace std;

class stack{
    int st[100];
    int t;
public:
    void init(){ t=0;}
    void push(int n);
    int pop();
};
void stack::push(int n){
    if(t==100) cout<<"stack is full"<<endl;
    st[t]=n;
    t++;
}
int stack::pop(){
    if(t==0){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    t--;
    return st[t];
}
int main()
{
    stack st1,st2;

    st1.init();
    st2.init();

    st1.push(1);
    st2.push(2);
    st1.push(3);
    st2.push(4);
    cout<<st1.pop()<<" "<<st2.pop()<<" "<<st1.pop()<<" "<<st2.pop()<<endl;
    return 0;
}

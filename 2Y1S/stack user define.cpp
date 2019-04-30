#include<iostream>
#define MAX 100
using namespace std;

int stack[MAX],top=0;

void push(int data){
    if(top==MAX) cout<<"stack overflow"<<endl;
    else stack[++top]=data;
}
int pop(){
    if(top==0){
        cout<<"stack empty"<<endl;
        return 0;
    }
    return stack[top--];
}
int main(){

    int n,a;
    cin>>n;
    for(int i=0; i<=n; i++){
        cin>>a;
        push(a);
    }
    for(int i=1; i<=n; i++) cout<<pop()<<endl;
}

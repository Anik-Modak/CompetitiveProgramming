#include<iostream>
#define MAX 100
using namespace std;

int queue[MAX],front=-1,rear=-1;

void push(int data){
    if(rear==MAX-1) cout <<"queue over flow"<<endl;
    else{
        if(front==-1) front=0;
        queue[++rear]=data;
    }
}
int pop(){
   if(front==-1||front>rear){
        cout <<"queue is empty ";
        return 0;
   }
   return queue[front++];
}
int main()
{
    int n,a;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>a;
        push(a);
    }
    for(int i=0; i<=n; i++) cout<<pop()<<endl;
}


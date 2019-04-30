#include<iostream>
#include<queue>
using namespace std;

int main()
{
    int i,n;
    queue<int>q;
    for(i=1;i<=10;i++) q.push(i);
    n=q.size();
    for(i=1;i<=n;i++){
        cout<<q.front()<<endl;
        q.pop();
    }
}

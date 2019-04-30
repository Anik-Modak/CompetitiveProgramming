#include<iostream>
using namespace std;
class recursive{
public:
    int func(int n){
        if(n==0)return n;
        if(n%2==0)return 1+func(n/2);
        else return 1+func(n-1);
    }




};
int main(){

    recursive rec;
    cout<<rec.func(13)<<endl;


    return 0;
}

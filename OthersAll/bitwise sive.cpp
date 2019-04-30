#include<bits/stdc++.h>
using namespace std;

int a[3125005];
vector<int>p;
int on(int n,int pos){
  return (n|(1<<pos));
}
bool check(int n,int pos){
    return (n&(1<<pos));
}
void bitsive(int n)
{
    int i,j;
    for(i=3; i<=sqrt(n); i++){
        for(j=i+i; j<=n; j+=i) a[j/32]=on(a[j/32],j%32);
    }
    p.push_back(2);
    for(i=3; i<=n; i+=2){
        if(check(a[i/32],i%32)==0) p.push_back(i);
    }
}
int main()
{
    int n;
    cin>>n;
    bitsive(n);
    for(int i=0; i<p.size(); i++) cout<<p[i]<<endl;
}

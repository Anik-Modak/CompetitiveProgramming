#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,c,cm=0,cc=0;
    cin>>n;
    while(n--){
        cin>>m>>c;
        if(m>c) cm++;
        else if(c>m) cc++;
    }
    if(cm>cc) cout<<"Mishka"<<endl;
    else if(cm<cc)cout<<"Chris"<<endl;
    else cout<<"Friendship is magic!^^"<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    int i,n;
    while(cin>>c){
        for(i=0;i<c.size();i++){
            if(c[i]>='A'&&c[i]<='C') cout<<"2";
            else if(c[i]>='D'&&c[i]<='F') cout<<"3";
            else if(c[i]>='G'&&c[i]<='I') cout<<"4";
            else if(c[i]>='J'&&c[i]<='L') cout<<"5";
            else if(c[i]>='M'&&c[i]<='O') cout<<"6";
            else if(c[i]>='P'&&c[i]<='S') cout<<"7";
            else if(c[i]>='T'&&c[i]<='V') cout<<"8";
            else if(c[i]>='W'&&c[i]<='Z') cout<<"9";
            else cout<<c[i];
        }
        cout<<endl;
    }
}

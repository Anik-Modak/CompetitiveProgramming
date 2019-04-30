#include<iostream>
using namespace std;
int main()
{
    long long s[8],a,b,c,d,e,f,g,h,i,mn;
    while(cin>>a>>b>>c>>d>>e>>f>>g>>h>>i){
       s[0]=b+c+d+e+g+i;
       s[1]=b+c+d+f+g+h;
       s[2]=a+b+e+f+g+i;
       s[3]=a+b+d+f+h+i;
       s[4]=a+c+e+f+g+h;
       s[5]=a+c+d+e+h+i;
       mn=s[0];
       a=0;
       for(i=0;i<6;i++){
            if(s[i]<mn){
                mn=s[i];
                a=i;
            }
       }
        if(a==0) cout<<"BCG "<<mn<<endl;
        else if(a==1) cout<<"BGC "<<mn<<endl;
        else if(a==2) cout<<"CBG "<<mn<<endl;
        else if(a==3) cout<<"CGB "<<mn<<endl;
        else if(a==4) cout<<"GBC "<<mn<<endl;
        else if(a==5) cout<<"GCB "<<mn<<endl;
    }
}

//AnikModak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(1){
        cin>>n;
        if(n==0) break;
        long long i,j,x=0,y=0,cub=cbrt(n);

        for(i=1; i<cub; i++)
        {
            int ch=0;
            for(j=cub; j>i; j--)
            {
                double a=(i*i+i*j+j*j),b=n/(i-j);
                if(a==b){
                    x=j; y=i;
                    ch=1;
                }
                cout<<a<<b<<endl;
            }
            if(ch) break;
        }
        if(x) cout<<x<<" "<<y<<endl;
        else cout<<"No solution"<<endl;
    }
}

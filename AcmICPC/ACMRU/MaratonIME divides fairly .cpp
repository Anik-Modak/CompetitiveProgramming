//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;

    long long a,b,s;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        if(a==b||abs(a-b)==1) cout<<"Ok\n";
        else{
            s=a+b;
            if(s%2) cout<<s/2<<" "<<s/2+1<<endl;
            else cout<<s/2<<" "<<s/2<<endl;
        }
    }
}




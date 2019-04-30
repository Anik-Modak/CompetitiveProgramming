//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    long long s1=0,s2=0,a[n];

    for(int i=0; i<n; i++) cin>>a[i];

    int c=0;

    for(int i=0; i<n; i++)
    {
        s1=0;
        for(int j=i; j<n; j++){
            s1+=a[j];
            if(s1==0) c++;
        }
    }
    cout<<c<<endl;
}

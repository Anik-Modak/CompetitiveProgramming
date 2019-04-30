#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    string s[n+2];
    for(int i=1; i<=n; i++) cin>>s[i];

    cout<<"Linear search: ";  //linear
    int loc=0;
    for(int i=1; i<=n; i++){
        if(s[i]=="karim") loc=i;
    }
    if(loc) cout<<loc<<endl;
    else cout<<"karim is not here"<<endl;

    cout<<"Binary search: ";  //Binary
    int l=1,h=n,mid=(1+n)/2;
    while(s[mid]!="karim"&&l<=h)
    {
        if(s[mid]>"karim") h=mid-1;
        else l=mid+1;
        mid=(l+h)/2;
    }
    if(s[mid]=="karim") cout<<mid<<endl;
    else cout<<"karim is not here"<<endl;
}


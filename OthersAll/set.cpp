#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>b;
    int n,i;
    cin>>n;
    int a[n+1],mx,mn;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(i==1){
            mx=a[i];
            mn=a[i];
        }
        if(mx<a[i]) mx=a[i];
        if(mn>a[i]) mn=a[i];
    }
    int j,p=0,s=(mx+mn);
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]+a[j]==s){
                cout<<i<<" "<<j<<endl;
                b.insert(i);
                b.insert(j);
                break;
            }
        }
    }
    i=1;
    for(set<int>::iterator it=b.begin(); it!=b.end(); ++it){
        if(i%2==0) cout<<*it<<endl;
        else cout<<*it<<" ";
        i++;
    }
}


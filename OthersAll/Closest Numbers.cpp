#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,id,p=0;
    cin>>n;

    int i,a[n];
    for(i=0; i<n; i++) cin>>a[i];
    sort(a,a+n);

    int diff,mn;
    map<int,int>mp;

    for(i=1; i<n; i++)
    {
        diff=a[i]-a[i-1];
        if(i==1) mn=diff;
        mn=min(diff,mn);
        mp[diff]++;
    }

    int siz=mp[mn],c=0;
    for(i=0; i<n; i++)
    {
        if(c==siz-1){
            if(a[i]-a[i-1]==mn) cout<<a[i-1]<< " "<<a[i]<<endl;
        }
        else{
            if(a[i]-a[i-1]==mn){
                    cout<<a[i-1]<< " "<<a[i]<<" ";
                    c++;
            }
        }
    }
    return 0;
}



//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    string a,b;
    cin>>a>>b>>k;

    if(a.size()+b.size()<k){
        cout<<"Yes"<<endl;
        return 0;
    }
    while(k--)
    {
        int len1=a.size();
        int len2=b.size();

        if(len1==0||len2==0){
            if(len1==0) a.push_back(b[len2-1]);
            if(len2==0) b.push_back(a[len1-1]);
            continue;
        }
        if(len1>len2) a.resize (len1- 1);
        else b.resize (len2- 1);
    }

    if(a==b) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}

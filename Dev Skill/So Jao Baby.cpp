//Anik_Modak
#include<bits/stdc++.h>
#define MAX 100005
using namespace std;

int main()
{
    int t,ca,n;
    //freopen("input.txt","r",stdin);
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        long long n,s=0;
        cin>>n;

        int i,a[105],c=0;
        for(i=0; i<100; i++) cin>>a[i];
        sort(a,a+100);
        reverse(a,a+100);

        for(i=0; i<100; i++)
        {
            s=s+a[i];
            if(s>=n) break;
            c++;
        }
        cout<<c<<endl;
    }
    return 0;
}



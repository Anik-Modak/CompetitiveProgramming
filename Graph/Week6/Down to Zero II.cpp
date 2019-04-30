//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

bool a[500005]={0};
void sive()
{
    int n = 1000005;
    for(int i=3; i<=sqrt(n); i+=2)
    {
       if(a[i/2]==0){
            for(int j=i*i; j<n; j+=i*2) a[j/2]=1;
       }
    }
}

int divisior(int n)
{
    int m = 1;
    for(int i=2; i<=sqrt(n+1); i++)
    {
        if(n%i==0)
        {
            m=max(m,i);
            //cout<<i<<endl;
        }
    }
    return max(m,n/m);
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n, m;
    cin>>n;
    sive();

    while(n--)
    {
        cin>>m;

        int ans=0;
        while(m>0)
        {
            if(m<=2) m--;
            else if(m%2==1 && a[m/2]==0) m--;
            else m = divisior(m);
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}

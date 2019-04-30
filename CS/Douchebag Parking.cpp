//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,w;
    cin>>n>>w;

    int a,l,s=0,id=0,ans=1000;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>l;
        if(a==1) s+=l;
        else{
            s=0;
            id=i;
        }
        if(s>=w) ans=min(id+1,ans);
    }
    if(ans==1000) cout<<-1<<endl;
    else cout<<ans<<endl;
}

//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,w;
    cin>>n>>w;

    int a,l,s=0,id=0,ans=1000;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>l;
        if(a==1) s+=l;
        else{
            s=0;
            id=i;
        }
        if(s>=w) ans=min(id+1,ans);
    }
    if(ans==1000) cout<<-1<<endl;
    else cout<<ans<<endl;
}


#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        int n,g,b;
        cin>>n>>g>>b;

        int g1[g],b1[b],i,sg=0,sb=0;
        for(i=0;i<g;i++) scanf("%d",&g1[i]);
        sort(g1,g1+g,cmp);

        for(i=0;i<b;i++) scanf("%d",&b1[i]);
        sort(b1,b1+b,cmp);

        l:for(i=0;i<n;i++)
        {
            if(g1[i]>b1[i]) sg=g1[i]-b1[i];
            else if(g1[i]<b1[i]) sb=b1[i]-g1[i];
        }
        if(sb!=0||sg!=0) goto l;
        if(sg>sb) cout<<"green wins"<<endl;
        else if(sb>sg) cout<<"blue wins"<<endl;
        else cout<<"green and blue died"<<endl;
        cout<<endl;
    }
}



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        int a[n+1],x,j;
        for(j=1;j<=n;j++){
            cin>>x;
            a[x]=j;
        }
        int ret=0,s=-1;
		for(j=1;j<=n;j++){
			if (a[j]<s){
				ret++;
                		s=n+1;
			}
			else s=a[j];
		}
        cout<<"Case "<<i<<": "<<ret<<endl;;
    }
}

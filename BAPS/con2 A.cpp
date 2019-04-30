#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    //freopen("new.txt","r",stdin);
    while(cin>>n>>m)
    {
        if(n==0&&m==0) break;
        int a[n],b[n];
        for(int i = 1; i <= n; i++) {
			a[i] = i - 1;
			b[i] = i + 1;
		}
		b[n] = -1;
		a[1] = -1;
        int l, r;
        while(m--){
			scanf("%d %d",&l,&r);

			a[b[r]] = a[l];
			if (a[l] != -1) printf("%d", a[l]);
			else printf("*");

			b[a[l]] = b[r];
			if (b[r] != -1) printf(" %d\n", b[r]);
			else printf(" *\n");
		}
        cout<<"-"<<endl;
    }
}




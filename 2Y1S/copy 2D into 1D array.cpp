#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m],a[n*m];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>arr[i][j];
            int p=(i-1)*n+j;
            a[p]=arr[i][j];
        }
    }
    for(int i=1; i<=m*n; i++) cout<<a[i]<<endl;
}

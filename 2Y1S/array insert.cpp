#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[100],i,j,n,item=54,LOC;
    cout << "How many number?" <<endl <<"Ans:";
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){

        if(a[i]>=item){
            LOC=a[i];
            for(j=n;j>=i;j--) a[j+1]=a[j];
        }
    }
    cout << "The numbers are: " <<endl;
    for(i=0;i<n+1;i++) cout << a[j] <<endl;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int a[100],n;

void print()
{
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

void solve(int i)
{
   // printf("start %d\n",i);

    if(i==n){
        print();
        return;
    }

    a[i]=0;
    solve(i+1);

    a[i]=1;
    solve(i+1);

    //printf("end %d\n",i);
}

int main()
{
    cin>>n;
    solve(0);
}

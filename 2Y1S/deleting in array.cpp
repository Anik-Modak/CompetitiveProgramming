#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    printf("Enter %d elements integer\n",n);

    //delete an item from position 2
    int a[n+1],loc=2;
    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=loc; i<n; i++) a[i]=a[i+1];

    for(int i=1; i<n; i++) cout<<a[i]<<endl;

    //delete karim to sorted array
    string s[100];
    printf("Enter %d elements string in assending order\n",n);
    for(int i=1; i<=n; i++) cin>>s[i];

    for(int i=1; s[i]!="karim";  i++) loc=i+1;
    for(int i=loc; i<n; i++) s[i]=s[i+1];

    for(int i=1; i<n; i++) cout<<s[i]<<endl;
}


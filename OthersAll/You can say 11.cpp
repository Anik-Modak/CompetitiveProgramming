#include<bits/stdc++.h>
using namespace std;

int main()
{
  string a;
  int rem;
  while(cin>>a){
    if(a.size()==1&&a[0]=='0') break;
    rem = 0;
    for(int i=0;i<a.size();i++)
    {
        rem = (rem*10)+(a[i]-'0');
        rem%=11;
    }
    if(rem==0) cout<<a<<" is a multiple of 11."<<endl;
    else cout<<a<<" is not a multiple of 11."<<endl;
  }
  return 0;
}


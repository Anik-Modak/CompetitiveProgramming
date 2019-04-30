#include<bits/stdc++.h>
using namespace std;

int main()
{
  int m,n,val;
  string a,b,c;
  cin>>a>>b;
  c=a;
  n=a.size();
  m=b.size();
  if(m==n){
    while((val = a.find(b))!=-1) a.erase(val,b.size());
    while((val = b.find(c))!=-1) b.erase(val,c.size());
  }
  n=a.size();
  m=b.size();
  if(n==0&&m==0) cout<<-1<<endl;
  else if(m>n) cout<<m<<endl;
  else cout<<n<<endl;
  return 0;
}

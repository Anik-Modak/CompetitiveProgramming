#include<bits/stdc++.h>
using namespace std;

int main()
{
  string anik;
  cin>>anik;

  int rem = 0;

  for(int i=0;i<anik.size();i++)
  {
      rem = (rem*10)+(anik[i]-'0');
      rem%=10;
  }
  if(rem==0) printf("Yes\n");
  else printf("No\n");

}

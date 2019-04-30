#include<bits/stdc++.h>
using namespace std;

int main()
{
  string a,b,c;
  //getline(cin,a,'\n');
  getline(cin,a);
  cin>>b>>c;
  int val;
  while((val = a.find(b))!=-1)
  {
      cout<<val<<endl;
      a.erase(val,b.size());
      a.insert(val,c);
  }
  cout<<a<<endl;

  /* size_t f = s.find("text to replace");
  s.replace(f, std::string("text to replace").length(), "new text");
  you can also use this. */
  return 0;
}



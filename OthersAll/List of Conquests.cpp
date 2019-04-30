#include <iostream>
#include <cstdio>
#include <string>
#include <map>
using namespace std;
int main()
{
  string country,temp;
  int n,cnt = 0;;
  cin>>n;
  cin.ignore();
  map<string, int> mp;
  while(n--){
     cin>>country;
     getline(cin,temp);
     mp[country]++;
  }
  for (map<string, int>::const_iterator iter = mp.begin(); iter != mp.end(); ++iter)
         cout << iter->first << " " << iter->second <<endl;
  return 0;
}


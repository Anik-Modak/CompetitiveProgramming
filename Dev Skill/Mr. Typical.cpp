#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str;
  while(cin>>str)
  {
      string word = "never be so happy when you are happy and never be so sad when you are sad";
      for(int i=0;i<word.size();i++){
          if(!isalpha(word[i])) word[i] = ' ';
      }
      stringstream s(word);
      int c = 0;
      while(s>>word) if(word==str) c=1;

      if(c) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int x[]={1,2,3,4,5};
  string word = "am ah f !!!!tyuyu!!!! 123 4444";

  for(int i=0;i<word.size();i++)
  {
      if(!isalpha(word[i])) word[i] = ' ';
  }

  stringstream s(word);
  int cnt = 0;
  while(s>>word)
  {
      cout<<word<<endl;
      ++cnt;
  }

  printf("%d\n",cnt);

  cout<<x<<endl;
  return 0;
}

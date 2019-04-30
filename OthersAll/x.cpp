#include<bits/stdc++.h>
using namespace std;

int main()
{
      string country,temp;
      int n,cnt[6] ={0};
      cin>>n;
      cin.ignore();
      while(n--){
         cin>>country;
         getline(cin,temp);
         if(country.compare("Spain")==0) cnt[1]++;
         if(country.compare("England")==0) cnt[0]++;
         if(country.compare("Turkey")==0) cnt[2]++;
      }
      if(cnt[0]>0) cout<<"England "<<cnt[0]<<endl;
      if(cnt[1]>0) cout<<"Spain "<<cnt[1]<<endl;
      if(cnt[2]>0) cout<<"Turkey "<<cnt[2]<<endl;
      return 0;
}


#include<iostream>
#include<cstring>
#include <fstream>
#include<vector>
#include<cstdlib>
using namespace std;

int main () {

	 char str[100],uva[100];

	 cout << "Enter the name of Your Problem text file: ";
	 cin>>str;

	 ifstream inp(str);

     vector<int>v;
	 int m;
	 while(inp>>m) v.push_back(m);

	 cout << "Enter the name of an existing text file: ";
	 cin>>uva;

	 cout<<"Enter the name of an output text file: ";
	 cin>>str;

	 ofstream out(str);

     int n,i,p;
	 for(i=0;i<v.size();i++)
	 {
        p=0;
        ifstream in(uva);
        while(in>>n) if(v[i]==n) p=1;
        in.close();
        if(p==0) out<<v[i]<<endl;
	 }
     inp.close();
	 out.close();
	 cout<<"See your output in : "<<str<<endl;
	 return 0;
}

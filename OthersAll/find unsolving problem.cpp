#include<iostream>
#include<cstring>
#include <fstream>
#include<vector>
#include<cstdlib>
using namespace std;

int main () {

	 char str[100],pl[100];

	 cout << "Enter the name of Your new problem text file: ";
	 cin>>str;

	 ifstream inp(str);

     vector<int>v;
	 int m;
	 while(inp>>m) v.push_back(m);

	 cout << "Enter the name of existing(solve previous) text file: ";
	 cin>>pl;

	 cout<<"Enter the name of an output text file: ";
	 cin>>str;

	 ofstream out(str);

     int n,i,p;
	 for(i=0;i<v.size();i++)
	 {
        p=0;
        ifstream in(pl);
        while(in>>n) if(v[i]==n) p=1;
        in.close();
        if(p==0) out<<v[i]<<endl;
	 }
     inp.close();
	 out.close();
	 cout<<endl<<"See your output in : "<<str<<endl;
	 return 0;
}


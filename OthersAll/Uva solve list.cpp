#include<iostream>
#include<cstring>
#include <fstream>
#include<vector>
#include<cstdlib>
using namespace std;

int main () {

	 char str[100];

	 cout << "Enter the name of Your Problem text file: ";
	 cin>>str;

	 ifstream inp(str);

	 int uva;
	 cout << "Enter your problem number: ";
	 cin>>uva;

     int n,p=0;
     while(inp>>n) if(uva==n) p=1;
     inp.close();

     if(p) cout<<"This problem is solved"<<endl;
     else cout<<"You can't solve this problem"<<endl;
	 return 0;
}


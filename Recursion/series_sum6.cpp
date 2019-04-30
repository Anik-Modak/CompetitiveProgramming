#include<bits/stdc++.h>
using namespace std;

int n;

int sum(int i)
{
	if(i>n) return 0;
	
	cout<<i*(2*i-1)*(2*i-1)<<" ";
	return i*(2*i-1)*(2*i-1)+sum(i+1);
}
	

int main()
{
	cin>>n;
	cout<<sum(1)<<endl;
}


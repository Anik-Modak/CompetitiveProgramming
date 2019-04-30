#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
	if(n==0) return n;
	cout<<n<<" ";
	return n+sum(n-1);
}
	

int main()
{
	int n;
	cin>>n;
	cout<<sum(n);
}


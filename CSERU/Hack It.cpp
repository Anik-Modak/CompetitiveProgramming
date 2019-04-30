#include<bits/stdc++.h>
using namespace std;
const int n=3;
const int maxn=3010;
int arr[maxn][maxn];
int main()
{
    //freopen("output.txt","w",stdout);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				arr[i*n+j][k*n+(j*k+i)%n]=1;
			}
		}
	}
	cout<<9<<endl;
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<9;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}

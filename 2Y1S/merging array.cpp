#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cout<<"Enter size of two array: ";
	cin>>n>>m;
	int arr1[n],arr2[m],arr3[n+m];

	for(int i=0; i<n; i++) cin>>arr1[i];
	for(int i=0; i<m; i++) cin>>arr2[i];

	int j=0;
	for(int i=0; i<n+m; i++)
    {
		if(i<n) arr3[i] = arr1[i];
		else{
			arr3[i] = arr2[j];
			j++;
		}
	}
	for(int i=0; i<n+m; i++) cout<<arr3[i]<<"  ";
	cout<<endl;
	return 0;
}

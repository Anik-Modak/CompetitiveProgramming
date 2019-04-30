//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

long long ans = 0;

void Merge(int a[], int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
    j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (a[i] <= a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
            ans += mid-i+1;
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}

void MergeSort(int a[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);

		Merge(a, low, high, mid);
	}
}

int main()
{
    int n;
    cin>>n;

    int a[n+2];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    MergeSort(a,1,n);

    cout<<ans<<endl;

    return 0;
}

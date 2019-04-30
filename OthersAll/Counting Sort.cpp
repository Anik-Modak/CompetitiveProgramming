//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int c[1000] = {0};

void counting_sort(int a[], int n)
{
    int b[n];
    for(int i = 0; i < n; i++) c[a[i]]++;

    for(int i = 1; i < n; i++) c[i] += c[i-1];

    for(int i = n-1; i >= 0; i--)
    {
        b[c[a[i]]-1] = a[i];
        c[a[i]]--;
    }
    for(int i = 0; i < n; i++)
        cout<<b[i]<<" ";
}

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    counting_sort(a,n);
}

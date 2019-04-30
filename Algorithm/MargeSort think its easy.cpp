//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

void Merge(string arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    string L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].length() <= R[j].length())
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }


    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(string arr[], int l, int h)
{
    if(l<h)
    {
        int m=l+(h-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        Merge(arr,l,m,h);
    }

}

int main()
{
    int n;
    cin>>n;
    cin.ignore();

    while(n--)
    {
        string St[10000], s, str;

        getline(cin,str);
        stringstream  ss(str);

        int j=-1;
        while(ss)
        {
            ss>>s;
            St[++j]=s;
        }
        mergeSort(St,0,j-1);

        for(int i=0; i<j; i++)
        {
            cout<<" "<<St[i];
        }
        cout<<endl;
    }
    return 0;
}

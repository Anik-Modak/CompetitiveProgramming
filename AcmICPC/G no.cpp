#include <bits/stdc++.h>
using namespace std;
int *st;

int gcd(int a, int b)
{
    if (a < b)
        swap(a, b);
    if (b==0)
        return a;
    return gcd(b, a%b);
}


int findGcd(int ss, int se, int qs, int qe, int si)
{
    if (ss>qe || se < qs)
        return 0;
    if (qs<=ss && qe>=se)
        return st[si];
    int mid = ss+(se-ss)/2;
    return gcd(findGcd(ss, mid, qs, qe, si*2+1),
               findGcd(mid+1, se, qs, qe, si*2+2));
}

int findRangeGcd(int ss, int se, int arr[], int n)
{
    if (ss<0 || se > n-1 || ss>se)
    {
        return -1;
    }
    return findGcd(0, n-1, ss, se, 0);
}

int constructST(int arr[], int ss, int se, int si)
{
    if (ss==se)
    {
        st[si] = arr[ss];
        return st[si];
    }
    int mid = ss+(se-ss)/2;
    st[si] = gcd(constructST(arr, ss, mid, si*2+1),
                 constructST(arr, mid+1, se, si*2+2));
    return st[si];
}

int *constructSegmentTree(int arr[], int n)
{
    int height = (int)(ceil(log2(n)));
    int size = 2*(int)pow(2, height)-1;
    st = new int[size];
    constructST(arr, 0, n-1, 0);
    return st;
}


int findSmallestSubarr(int arr[], int n, int k)
{

    bool found = false;
    for (int i=0; i<n; i++)
    {
        if (arr[i] == k)
            return 1;
        if (arr[i] % k == 0)
            found = true;
    }
    if (found == false)
        return -1;

    constructSegmentTree(arr, n);

    int res = n+1;

    for (int i=0; i<n-1; i++)
    {
        if (arr[i] % k != 0)
            continue;

        int low = i+1;
        int high = n-1;

        int closest = 0;

        while (true)
        {
            int mid = low + (high-low)/2;
            int gcd = findRangeGcd(i, mid, arr, n);
            if (gcd > k)
                low = mid;

            else if (gcd == k)
            {
                high = mid;
                closest = mid;
                break;
            }


            else
                high = mid;

            if (abs(high-low) <= 1)
            {
                if (findRangeGcd(i, low, arr, n) == k)
                    closest = low;
                else if (findRangeGcd(i, high, arr, n)==k)
                    closest = high;
                break;
            }
        }

        if (closest != 0)
            res = min(res, closest - i + 1);
    }
    return (res == n+1) ? -1 : res;
}

int main()
{
    int n;
    int q;
    while(scanf("%d",&n)==1)
    {
        int k, number[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d",&number[i]);
        }
        scanf("%d",&q);

        for(int i = 1; i <= q; i++)
        {
            scanf("%d",&k);
            if(findSmallestSubarr(number,n,k) == 1)
                printf("Y\n");
            else printf("N\n");
        }
    }
    return 0;
}


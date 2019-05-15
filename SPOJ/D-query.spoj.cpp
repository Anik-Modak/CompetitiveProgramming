//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

#define MAX 311111
#define A 1111111
#define BLOCK 555

int mp[A], a[MAX], ans[MAX], cnt = 0;

struct node
{
    int L, R, i;
} q[MAX];

bool cmp(node x, node y)
{
    if(x.L/BLOCK != y.L/BLOCK)
    {
        return x.L/BLOCK < y.L/BLOCK;
    }
    return x.R < y.R;
}

void add(int pos)
{
    mp[a[pos]]++;
    if(mp[a[pos]] == 1)
    {
        cnt++;
    }
}

void remove(int pos)
{
    mp[a[pos]]--;
    if(mp[a[pos]] == 0)
    {
        cnt--;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    int m;
    scanf("%d", &m);
    for(int i=0; i<m; i++)
    {
        scanf("%d%d", &q[i].L, &q[i].R);
        q[i].L--;
        q[i].R--;
        q[i].i = i;
    }

    sort(q, q + m, cmp);

    int currentL = 0, currentR = 0;
    for(int i=0; i<m; i++)
    {
        //cout<<q[i].L<<" "<<q[i].R<<endl;
        int L = q[i].L, R = q[i].R;
        while(currentL < L)
        {
            remove(currentL);
            currentL++;
        }

        while(currentL > L)
        {
            add(currentL-1);
            currentL--;
        }

        while(currentR <= R)
        {
            add(currentR);
            currentR++;
        }

        while(currentR > R+1)
        {
            remove(currentR-1);
            currentR--;
        }

        ans[q[i].i] = cnt;
    }

    for(int i=0; i<m; i++)
        printf("%d\n", ans[i]);

    return 0;
}

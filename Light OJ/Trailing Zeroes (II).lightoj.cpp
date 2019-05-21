//Anik_Modak
#include<bits/stdc++.h>
using namespace std;

int func(int n, int x)
{
    int  i, s=0;
    for(i=x; i<=n; i*=x)
        s+=(n/i);
    return s;
}

int calc_func(int N, int x)
{
    int counter = 0;
    while(N % x == 0)
    {
        counter++;
        N = N / x;
    }
    return counter;
}

int main()
{
    ios_base::sync_with_stdio(false) ;
    int ca, t;
    cin>>t;

    for(ca=1; ca<=t; ca++)
    {
        int n, r, p, q;
        cin>>n>>r>>p>>q;

        int n2, n5, n_r2, n_r5, p2, p5, r2, r5;
        n2 = func(n, 2);
        n5 = func(n, 5);
        //cout<<n2<<" "<<n5<<endl;

        r2 = func(r, 2);
        r5 = func(r, 5);
        //cout<<r2<<" "<<r5<<endl;

        n_r2 = func(n-r, 2);
        n_r5 = func(n-r, 5);
        //cout<<n_r2<<" "<<n_r5<<endl;

        p2 = q * calc_func(p, 2);
        p5 = q * calc_func(p, 5);
        //cout<<p2<<" "<<p5<<endl;

        int t2, t5;
        t2 = n2 - (r2 + n_r2) + p2;
        t5 = n5 - (r5 + n_r5) + p5;
        printf("Case %d: %d\n", ca, min(t2, t5));
    }
    return 0;
}



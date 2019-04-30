#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

long long int fn(long long a, long long b, long long p)
{
   double x = log2 (a);
   double y = log2 (b);

   long long ans = (long long) y - (long long) x;
   long long m = a/2;
   long long inty = (long long) y;
   long long pw = pow(2.0 , (double) inty);
  // cout << "pw " << pw << endl;
   if((pw + m) <= b)
   {
       ans = ans + 1;
   }

   return ans;
}

int main()
{
    int ts = 0, t;
    cin >> t;
    long long int p, m, n, i, ans;
    while(t--)
    {
        cin >> p >> m >> n;
        if(p==1)
        {
            ans = n-m+1;
           // cout << n-m+1 << endl;
        }

        else if(p%2 == 0)
        {
            if(p > m)
            {
                ans = p-1-m+1;
               // cout << p-1-m+1 << endl;
            }
            else if(p <= m)
                ans = 0;

        }

        else if(p > m)
        {
            ans = p - m;
            //cout << fn(p, n, p) << endl;
            ans = ans + fn(p, n, p);
          //  cout <<"One "<< ans << endl;
        }

        else if(p < m)
        {
            ans = fn(p, n, p);
            ans = ans - fn(p, m-1, p);
        }

        else
        {
            ans = fn(p, n, p);
        }

        if(ans == 0)
            cout << "Case " << ++ts << ": " << "0/1" << endl;
        else
        {
            long long ans1, ans2, mn;
            mn = __gcd(ans, n - m + 1);
            ans1 = ans / mn;
            ans2 = (n-m+1) / mn;
            cout << "Case " << ++ts << ": " << ans1 <<"/"<<ans2 <<endl;
        }
    }
return 0;
}

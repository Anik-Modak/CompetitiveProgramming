long long bigmod (ll a, ll p)
{
    long long res = 1, x = a;
    while (p)
    {
        if ( p & 1 )
        {
            res = ( res * x ) % mod;
        }
        x = ( x * x ) % mod;
        p = p >> 1;
    }
    return res;
}

ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1)
      return 0;

    while (a > 1)
    {
        ll q = a / m;
        ll t = m;
        m = a % m, a = t;
        t = y;
        y = x - q * y;
        x = t;
    }

    if (x < 0)
       x += m0;

    return x;
}

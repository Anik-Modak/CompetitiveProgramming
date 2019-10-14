#include
using namespace std;

int main()
{
    long long test, a,b,c, cs = 1;
    scanf("%lld", &test);
    while(test--)
    {
        scanf("%lld %lld %lld", &a,&b,&c);
        bool ck = 0;
        long long x = 2 * (a + c);
        long long cons = (bb) - ((aa) + (cc));
        long long mx = max(a,b);
        mx = max(mx, c);
        for(long long i = max(mx, x/2); i <= a+(bb)+c ; i+=2)
        {
            if(((2 * i *i) - x * i - cons) == 0)
            {
                printf("Case %lld: %lld\n", cs++, i);
                ck = 1;
                break;
            }
        }
        if(!ck)
            printf("Case %lld: 0\n", cs++);

    }
    return 0;
}
